/* 
Copyright 2005 Blogbeat, LLC. All rights reserved. 
Radio is in the hands of such a lot of fools trying to anaesthetise the way that you feel
don't pimp this code w/o permission - email pimp@blogbeat.net
*/
function BlogbeatUrl(url)
{
	this.url = url;
	this.address = "";
	this.path = "";
	this.file = "";
	this.subdomain = "";
	this.domain = "";	
	this.isSame = function(url2)
    {
        u2 = new BlogbeatUrl(url2);
        return (
            this.subdomain.toString() == u2.subdomain.toString() &&
            this.domain.toString() == u2.domain.toString() &&
            this.path.toString() == u2.path.toString()
            );
    };    
    this.isExactSame = function(url2)
    {
        return (this.url.toString() == BlogbeatUrl(url2).url.toString());
    };
	
	var spos = url.indexOf("://");
	spos = (spos==-1)?0:spos+3;
	
	var epos = url.indexOf("/",spos);
	epos = (epos==-1)?url.length:epos;
	
	this.address = url.slice(spos, epos);
	this.path = url.slice(epos, url.length);
	if ( this.path.length == 0)
	{
	    this.path = "/";
	}
	else
	{
	    if ( this.path.indexOf("#") != -1 ) this.path = this.path.slice(0, this.path.indexOf("#"));
	    this.file = this.path.slice(this.path.lastIndexOf("/")+1);
	}
	
	epos = this.address.substring(0, this.address.lastIndexOf(".")).lastIndexOf(".");
	this.domain = this.address.slice(epos+1);
	if (epos>=0) this.subdomain = this.address.slice(0, epos);
	if (this.subdomain.toLowerCase().toString() == "www") this.subdomain = "";
}

var Blogbeat =
{
	initialize:function(db, id)
	{
	    Blogbeat.img = new Image();
	    Blogbeat.db = db;
		Blogbeat.id = id;
		Blogbeat.url = new BlogbeatUrl(parent.location.href);

        if (Blogbeat.checkIgnore()) return;
		Blogbeat.regEvent(window, "load", new function() { Blogbeat.doView(); });
		Blogbeat.regEvent(window, "unload", new function() { Blogbeat.doUnload(); });
	},

	regEvent: function(el, evt, hdlr)
	{
		if ( el.attachEvent )
		{
			el.attachEvent("on"+evt, hdlr);
		}
		else
		{
			el.addEventListener(evt, hdlr, false);
		}
	},
	
	getCurrentPage:function()
	{
		return new BlogbeatUrl(parent.location.href);
	},
	
	isFromSameSite:function(url)
	{
	    if (url=="") return true;
	    var u2 = new BlogbeatUrl(url);
	    return ( (u2.subdomain.toString() == Blogbeat.url.subdomain.toString() && u2.domain.toString() == Blogbeat.url.domain.toString() ) &&
	            Blogbeat.url.path.indexOf(u2.path, 0) != -1 );
	},
	
	isHome:function()
	{
		return (Blogbeat.getCurrentPage().isSame(Blogbeat.url.url));
	},

	regIgnore:function()
	{
	    Blogbeat.setCookie("bbnyah", "1", true);
	},
	
	checkIgnore:function()
	{
	    if ( parent.location.href.indexOf("?bbnyah") != -1 ) Blogbeat.regIgnore();
	    return Blogbeat.isIgnore();
	},
	
	isIgnore:function()
	{
	    return ( Blogbeat.getCookie("bbnyah") != "" )
	},
	
	regClick:function()
	{
	    for(var x = 0; x < document.links.length; x++)
		{
			if ( !Blogbeat.isFromSameSite(document.links[x].href) )
		    {
		        Blogbeat.regEvent(document.links[x], "click", Blogbeat.doClick);
			}
		}
	},
	
	regCommentForm:function()
	{
    	for(var x = 0; x < document.forms.length; x++)
	    {
	        if ( Blogbeat.isCommentForm(document.forms[x]) )
	        {
	            Blogbeat.regEvent(document.forms[x], "submit", Blogbeat.doComment);
            }
	    }
	},
	
	isCommentForm:function(frm)
	{
	    try {
		return(
	        frm.id.indexOf("comment") != -1 ||
	        frm.action.indexOf("comment") != -1
	        );
	    } catch(e) { return false; }
	},
	
	doCommentAuthor:function()
	{
	    var el = document.getElementById("author");
	    if (el!=null)return el.value;
	    //typepad
	    el = document.getElementById("comment-author");
	    if (el!=null)return el.value;
	    //blogger
	    el = document.getElementById("bname");
	    if (el!=null)return el.value;
	    el = document.getElementById("uname");
	},
	
	doCommentEmail:function()
	{
	    var el = document.getElementById("email");
	    if (el!=null)return el.value;
	    //typead
	    el = document.getElementById("comment-email");
	    if (el!=null)return el.value;
	    //blogger
	    el = document.getElementById("url");
	    if (el!=null)return el.value;
	    
	},
	
	setCookie:function(c, val, exp)
	{
	    document.cookie = c + "=" + escape(val) + ";path=/;domain=" + Blogbeat.url.domain + ";" +
	        (exp==true ? "expires=Sun, 08 Dec 2030 00:00:00 GMT;" : "");
	},
	
	getCookie:function(name)
	{
	    var parts = document.cookie.split(";");
	    for(var x = 0; x < parts.length; x++)
	    {
	        if (parts[x].indexOf(name,0) != -1) return parts[x].slice(parts[x].indexOf("=")+1);
	    }
	    return "";
	},
	
	doView:function()
	{
	    Blogbeat.regClick();
	    Blogbeat.regCommentForm();
	    if ( Blogbeat.getCookie("bbhimom")=="") Blogbeat.setCookie("bbhimom", Math.floor(Math.random()*2147483647)-31337+Math.floor(Math.random()*2147483647), true);
	    if ( Blogbeat.getCookie("bbses")=="") Blogbeat.setCookie("bbses", Math.floor(Math.random()*2147483647), false);
	    
	    Blogbeat.notify("view", "");
	},
	
    doComment:function(e)
    {
        if (!e) e = window.event;
		var frm = (e.target) ? e.target : e.srcElement;
		var name = Blogbeat.doCommentAuthor();
		var email = Blogbeat.doCommentEmail();		
		
		Blogbeat.notify("comment", "&nm=" + escape(name) + "&em=" + escape(email));
    },
    
	doClick:function(e)
	{
        if (!e) e = window.event;
	    var tg = (e.target) ? e.target : e.srcElement;
	    var txt = (tg.text)?tg.text:tg.innerText;
	    var href = (tg.href)?tg.href:tg;

	    if( href )
	    {
	        Blogbeat.notify("click", "&n=" + escape(txt) + "&l=" + escape(href));
        }
	},
	
	doUnload:function()
	{
	},

	notify:function(type, items)
	{
	    var d = new Date();
	    
	    Blogbeat.img.src = "http://tracker.blogbeat.net/" + Blogbeat.db + "/" + Blogbeat.id + "." + type + "?" +
		    "p=" + escape(Blogbeat.getCurrentPage().path) + 
		    "&pt=" + escape(document.title) +
		    "&c=" + Blogbeat.getCookie("bbhimom") + "&s=" + Blogbeat.getCookie("bbses") +
			(!Blogbeat.isFromSameSite(document.referrer)?"&r=" + escape(document.referrer):"") + 
			"&tz=" + (d.getTimezoneOffset()/60) + 
			"&sw=" + screen.width + "&sh=" + screen.height +
			items;
	}
}
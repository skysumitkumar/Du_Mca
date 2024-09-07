var AdBrite_Title_Color_Default = '000000';
var AdBrite_Text_Color_Default = '000000';
var AdBrite_Background_Color_Default = 'FFFFFF';
var AdBrite_Border_Color_Default = 'FFFFFF';
var AdBrite_URL_Color_Default = '';
var AdBrite_Title_Color,AdBrite_Text_Color,AdBrite_Background_Color,AdBrite_Border_Color,AdBrite_URL_Color;
AdBrite_Title_Color = AdBrite_IAB_Zone_Test_Color(AdBrite_Title_Color);
AdBrite_Text_Color = AdBrite_IAB_Zone_Test_Color(AdBrite_Text_Color);
AdBrite_Background_Color = AdBrite_IAB_Zone_Test_Color(AdBrite_Background_Color);
AdBrite_Border_Color = AdBrite_IAB_Zone_Test_Color(AdBrite_Border_Color);
AdBrite_URL_Color = AdBrite_IAB_Zone_Test_Color(AdBrite_URL_Color);
var AdBrite_Title_Color_Processed = (AdBrite_Title_Color) ? AdBrite_Title_Color : AdBrite_Title_Color_Default;
var AdBrite_Text_Color_Processed = (AdBrite_Text_Color) ? AdBrite_Text_Color : AdBrite_Text_Color_Default;
var AdBrite_Background_Color_Processed = (AdBrite_Background_Color) ? AdBrite_Background_Color : AdBrite_Background_Color_Default;
var AdBrite_Border_Color_Processed = (AdBrite_Border_Color) ? AdBrite_Border_Color : AdBrite_Border_Color_Default;
var AdBrite_URL_Color_Processed = (AdBrite_URL_Color) ? AdBrite_URL_Color : AdBrite_URL_Color_Default;
function AdBrite_IAB_Zone_Test_Color(color) {
if (typeof(color) != 'string') return false;
if (!color.match(/^[0-9A-Fa-f]{6}$/) && !color.match(/^[0-9A-Fa-f]{3}$/)) return false;
return color;
}
AdBrite_Title_Color = '';
AdBrite_Text_Color = '';
AdBrite_Background_Color = '';
AdBrite_Border_Color = '';
AdBrite_URL_Color = '';

var ADBRITE_setIFrameContent;

if (!ADBRITE_setIFrameContent) {
	ADBRITE_setIFrameContent = [];
}

function AdBriteRender_e8819a5e_8c5b_4290_ab63_e5abd92d70cf() {
	var frame = frames.AdBriteFrame_e8819a5e_8c5b_4290_ab63_e5abd92d70cf;
	if (frame && frame.document) {
		frame.document.open();
		frame.document.writeln("<html><head><style type='text/css'>");
		frame.document.writeln("body {background-color:#" + AdBrite_Background_Color_Processed + ";font-family:Arial,Helvetica,sans-serif;margin:0;}");
		frame.document.writeln("table {border:1px solid #" + AdBrite_Border_Color_Processed + ";width:728px;height:90px;padding:0;margin:0;overflow:hidden;display:block;}");
		frame.document.writeln("td {vertical-align:top;text-align:left;font-size:12px;padding:3px;height:82px;width:181px;}");
		frame.document.writeln("td a {text-decoration:none;}");
		frame.document.writeln("td span {display:block;overflow:hidden;}");
		frame.document.write("<\/style><\/head><body><table cellpadding='0' cellspacing='0'><tr><td><span style=''><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12700207&variation_id=1401128&uts=1238064465&cpc=302e3235&keyword_id=1474020&ab=168296499&sscup=fd35390f769055a3b87c49f0b7acd41d&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Title_Color_Processed + ";font-weight:bold;text-decoration:underline;' target='_top'>Change your Smile<\/a><\/span><span style='line-height:14px;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12700207&variation_id=1401128&uts=1238064465&cpc=302e3235&keyword_id=1474020&ab=168296499&sscup=fd35390f769055a3b87c49f0b7acd41d&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Text_Color_Processed + ";' target='_top'>Breathtaking smile makeovers by leading cosmetic dentists in Bombay<\/a><\/span><span style='background-color:#" + AdBrite_Background_Color_Processed + ";font-size:11px;white-space:nowrap;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12700207&variation_id=1401128&uts=1238064465&cpc=302e3235&keyword_id=1474020&ab=168296499&sscup=fd35390f769055a3b87c49f0b7acd41d&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_URL_Color_Processed + ";text-decoration:none;' target='_top'>www.dentzzdental.com<\/a><\/span><\/td><td><span style=''><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12798623&variation_id=1459592&uts=1238064465&cpc=302e3235&keyword_id=174&ab=168296499&sscup=4b3503ec475b80b4cdd4aba9e158772e&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Title_Color_Processed + ";font-weight:bold;text-decoration:underline;' target='_top'>Hey You Hair Loss Guy<\/a><\/span><span style='line-height:14px;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12798623&variation_id=1459592&uts=1238064465&cpc=302e3235&keyword_id=174&ab=168296499&sscup=4b3503ec475b80b4cdd4aba9e158772e&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Text_Color_Processed + ";' target='_top'>How Would You Like To Get Your Hair Back Before Summer?<\/a><\/span><span style='background-color:#" + AdBrite_Background_Color_Processed + ";font-size:11px;white-space:nowrap;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12798623&variation_id=1459592&uts=1238064465&cpc=302e3235&keyword_id=174&ab=168296499&sscup=4b3503ec475b80b4cdd4aba9e158772e&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_URL_Color_Processed + ";text-decoration:none;' target='_top'>www.thorbjornshealth.com<\/a><\/span><\/td><td><span style=''><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12662628&variation_id=1388762&uts=1238064465&cpc=302e31&keyword_id=1474020&ab=168296499&sscup=d4d2ce125179563f2008208733efdb88&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Title_Color_Processed + ";font-weight:bold;text-decoration:underline;' target='_top'>Domain Name Industry News<\/a><\/span><span style='line-height:14px;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12662628&variation_id=1388762&uts=1238064465&cpc=302e31&keyword_id=1474020&ab=168296499&sscup=d4d2ce125179563f2008208733efdb88&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Text_Color_Processed + ";' target='_top'>Free Daily News about the exiting Domain Name Industry<\/a><\/span><span style='background-color:#" + AdBrite_Background_Color_Processed + ";font-size:11px;white-space:nowrap;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12662628&variation_id=1388762&uts=1238064465&cpc=302e31&keyword_id=1474020&ab=168296499&sscup=d4d2ce125179563f2008208733efdb88&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_URL_Color_Processed + ";text-decoration:none;' target='_top'>www.domainnews.com<\/a><\/span><\/td><td><span style=''><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12803325&variation_id=1464331&uts=1238064465&cpc=302e3237&keyword_id=830526&ab=168296499&sscup=a9acdb962afab2d98cd058b756cea793&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Title_Color_Processed + ";font-weight:bold;text-decoration:underline;' target='_top'>Make Money Online Fast<\/a><\/span><span style='line-height:14px;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12803325&variation_id=1464331&uts=1238064465&cpc=302e3237&keyword_id=830526&ab=168296499&sscup=a9acdb962afab2d98cd058b756cea793&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_Text_Color_Processed + ";' target='_top'>3 Step Fast Money &#34;Skillset Videos&#34; Teach How To Make Fast Money<\/a><\/span><span style='background-color:#" + AdBrite_Background_Color_Processed + ";font-size:11px;white-space:nowrap;'><a href='http://click.svx.adbrite.com/mb/click.php?sid=199624&banner_id=12803325&variation_id=1464331&uts=1238064465&cpc=302e3237&keyword_id=830526&ab=168296499&sscup=a9acdb962afab2d98cd058b756cea793&sscra=e75bdf3e468ac736e4a31d6d12ae0b36&ub=2504740944&guid=a5d217c24a1e387a6ff14258dd3c06a7&rs=&r=' style='color:#" + AdBrite_URL_Color_Processed + ";text-decoration:none;' target='_top'>MaverickMoneyMakerSkills.com<\/a><\/span><\/td><\/tr><\/table><a href='http://www.adbrite.com/mb/?s_cid=aba&sid=199624' style='font-size:11px;text-decoration:none;color:#;position:absolute;bottom:1px;right:2px;z-index:1;' target='_top'>Ads by <b>AdBrite<\/b><\/a><\/body><\/html>");
		frame.document.close();
	}
}

ADBRITE_setIFrameContent.push(AdBriteRender_e8819a5e_8c5b_4290_ab63_e5abd92d70cf);

if (!document.body) document.write('<body>');
document.write("<iframe name='AdBriteFrame_e8819a5e_8c5b_4290_ab63_e5abd92d70cf' width='728' height='90' frameborder='0' scrolling='no'>");
document.write('</iframe>');
document.writeln('<script type="text/javascript"><!--');
document.writeln('AdBriteRender_e8819a5e_8c5b_4290_ab63_e5abd92d70cf();')
document.write('//--></script>');

var ADBRITE;
if (!ADBRITE) {
   ADBRITE = {};
}

if (!ADBRITE.INLINE) {
   ADBRITE.INLINE = {};

   ADBRITE.INLINE.keywords_to_inline = [];
   ADBRITE.INLINE.keyword_to_id = {};
   ADBRITE.INLINE.span_id = 'adbriteinline_' + Math.round( Math.random() * 999999999 );
   ADBRITE.INLINE.ad_background = 'http://files.adbrite.com/mb/images/adbrite-inline-bk-w-arr.gif';
   ADBRITE.INLINE.inline_text_color = '#006600';
   ADBRITE.INLINE.inline_underline = 'http://files.adbrite.com/mb/images/green-double-underline-006600.gif';
   ADBRITE.INLINE.ad_width = 325;
   ADBRITE.INLINE.ad_height = 135;
   ADBRITE.INLINE.supplier = 'www.adbrite.com';
   ADBRITE.INLINE.config = { 'sid': 199624,
                             'open_in_new_window': 0,
                             'hostname': 'ads.svx.adbrite.com',
                             'max_words_to_inline': 8,
                             'max_char_for_keywords': 1500,
                             'max_char_for_textnodes': 5000,
                             'max_adserver_calls': 2,
                             'min_char_per_keyword': 3 };
   ADBRITE.INLINE.time_limits = {};
   document.write('<span id="' + ADBRITE.INLINE.span_id + '" name="' + ADBRITE.span_id + '"></span>');
}
var ab_sUserAgent = navigator.userAgent;
var ab_fAppVersion = parseFloat(navigator.appVersion);
var ab_isKHTML = ab_sUserAgent.indexOf('KHTML') > -1 || ab_sUserAgent.indexOf('Konqueror') > -1 || ab_sUserAgent.indexOf('AppleWebKit') > -1;
var ab_isMoz = ab_sUserAgent.indexOf("Gecko") > -1 && !ab_isKHTML;
var ab_isMinMoz1 = ab_isMinMoz1_4 = ab_isMinMoz1_5 = false;
var ab_isOpera = ab_sUserAgent.indexOf('Opera') > -1;
var ab_isIE = ab_sUserAgent.indexOf('compatible') > -1 && ab_sUserAgent.indexOf('MSIE') > -1 && !ab_isOpera;
var ab_isMinIE4 = ab_isMinIE5 = ab_isMinIE5_5 = ab_isMinIE6 = false;

function ab_compareVersions(sVersion1, sVersion2) {
   var aVersion1 = sVersion1.split('.');
   var aVersion2 = sVersion2.split('.');

   if (aVersion1.length > aVersion2.length) {
      for (var i=0; i < aVersion1.length - aVersion2.length; i++) {
         aVersion2.push('0');
      }
   } else if (aVersion1.length < aVersion2.length) {
      for (vari=0; i < aVersion2.length - aVersion1.length; i++) {
         aVerison1.push('0');
      }
   }

   for (var i=0; i < aVersion1.length; i++) {
      if (aVersion1[i] < aVersion2[i]) {
         return -1;
      } else if (aVersion1[i] > aVersion2[i]) {
         return 1;
      }
   }
   return 0;
}

// this tests for the different versions of mozilla
if (ab_isMoz) {
   var ab_reMoz = new RegExp("rv:(\\d+\\.\\d+(?:\\.\\d+)?)");
   ab_reMoz.test(ab_sUserAgent);
   ab_isMinMoz1 = ab_compareVersions(RegExp["$1"], "1.0") >= 0;
   ab_isMinMoz1_4 = ab_compareVersions(RegExp["$1"], "1.4") >= 0;
   ab_isMinMoz1_5 = ab_compareVersions(RegExp["$1"], "1.5") >= 0;
}

//this tests for the different versions of ie
if (ab_isIE) {
   var ab_re_IE = new RegExp('MSIE (\\d+\\.\\d+)');
   ab_re_IE.test(ab_sUserAgent);
   var ab_fIEVersion = parseFloat(RegExp['$1']);

   // these are the minimal version number that will be accepted
   ab_isMinIE4 = ab_fIEVersion >= 4;
   ab_isMinIE5 = ab_fIEVersion >= 5;
   ab_isMinIE5_5 = ab_fIEVersion >= 5.5;
   ab_isMinIE6 = ab_fIEVersion >= 6.0;
}
// stopword list
var ADBRITE;
if (!ADBRITE) {
   ADBRITE = {};
}

if (!ADBRITE.stopword_list) {
   ADBRITE.stopword_list = {"about":1,"above":1,"across":1,"after":1,"afterwards":1,"again":1,"against":1,"all":1,"almost":1,"alone":1,"along":1,"already":1,"also":1,"although":1,"always":1,"among":1,"amongst":1,"amoungst":1,"amount":1,"and":1,"another":1,"anyhow":1,"anyone":1,"anything":1,"anyway":1,"anywhere":1,"are":1,"around":1,"back":1,"became":1,"because":1,"become":1,"becomes":1,"becoming":1,"been":1,"before":1,"beforehand":1,"behind":1,"being":1,"below":1,"beside":1,"besides":1,"between":1,"beyond":1,"both":1,"but":1,"by":1,"call":1,"can":1,"cannot":1,"cant":1,"con":1,"cool":1,"could":1,"couldnt":1,"describe":1,"detail":1,"doesn't":1,"done":1,"down":1,"due":1,"during":1,"each":1,"eight":1,"either":1,"eleven":1,"else":1,"elsewhere":1,"empty":1,"enough":1,"etc":1,"even":1,"ever":1,"every":1,"everyone":1,"everything":1,"everywhere":1,"except":1,"few":1,"fify":1,"fill":1,"find":1,"fire":1,"five":1,"for":1,"former":1,"formerly":1,"found":1,"four":1,"free":1,"from":1,"front":1,"full":1,"further":1,"get":1,"give":1,"had":1,"hadn't":1,"has":1,"hasnt":1,"have":1,"hence":1,"her":1,"here":1,"hereafter":1,"hereby":1,"herein":1,"hereupon":1,"hers":1,"herself":1,"him":1,"himself":1,"his":1,"how":1,"however":1,"inc":1,"indeed":1,"interest":1,"into":1,"its":1,"itself":1,"keep":1,"last":1,"latter":1,"latterly":1,"least":1,"ltd":1,"made":1,"many":1,"may":1,"meanwhile":1,"might":1,"mine":1,"more":1,"moreover":1,"most":1,"mostly":1,"much":1,"must":1,"mustn't":1,"myself":1,"namely":1,"neither":1,"never":1,"nevertheless":1,"next":1,"nine":1,"nobody":1,"none":1,"noone":1,"nor":1,"not":1,"nothing":1,"now":1,"nowhere":1,"off":1,"often":1,"once":1,"one":1,"only":1,"onto":1,"other":1,"others":1,"otherwise":1,"our":1,"ours":1,"ourselves":1,"out":1,"over":1,"own":1,"part":1,"per":1,"perhaps":1,"please":1,"put":1,"rather":1,"same":1,"see":1,"seem":1,"seemed":1,"seeming":1,"seems":1,"several":1,"she":1,"should":1,"show":1,"side":1,"since":1,"sincere":1,"site":1,"six":1,"some":1,"somehow":1,"someone":1,"something":1,"sometime":1,"sometimes":1,"somewhere":1,"still":1,"such":1,"target":1,"take":1,"ten":1,"than":1,"that":1,"the":1,"their":1,"them":1,"themselves":1,"then":1,"thence":1,"there":1,"thereafter":1,"thereby":1,"therefore":1,"therein":1,"thereupon":1,"these":1,"they":1,"third":1,"this":1,"those":1,"though":1,"through":1,"throughout":1,"thru":1,"thus":1,"together":1,"too":1,"top":1,"toward":1,"towards":1,"two":1,"under":1,"until":1,"upon":1,"very":1,"via":1,"was":1,"web":1,"website":1,"well":1,"were":1,"what":1,"whatever":1,"when":1,"whence":1,"whenever":1,"where":1,"whereafter":1,"whereas":1,"whereby":1,"wherein":1,"whereupon":1,"wherever":1,"whether":1,"which":1,"while":1,"whither":1,"who":1,"whoever":1,"whole":1,"whom":1,"whose":1,"why":1,"will":1,"with":1,"within":1,"without":1,"would":1,"www":1,"yet":1,"you":1,"your":1,"yours":1,"yourself":1,"yourselves":1,"save":1,"track":1,"link":1,"links":1,"file":1,"document":1,"video":1,"audio":1,"upload":1,"uploaded":1,"download":1,"downloaded":1,"comment":1,"add":1,"contact":1,"here":1,"requirement":1,"requirements":1,"info":1,"album":1,"rate":1};
}
ADBRITE.INLINE.is_inlined;
ADBRITE.INLINE.start_time;
ADBRITE.INLINE.keywords_already_inlined = [];
ADBRITE.INLINE.keywords_ids_already_inlined_str = "";
ADBRITE.INLINE.text_nodes = [];
ADBRITE.INLINE.adbriteinline_tags = [];
ADBRITE.INLINE.tags_to_ignore = {'A':1,'H1':1,'H2':1,'H3':1,'H4':1,'H5':1,'H6':1,'TH':1,'SCRIPT':1,'NOSCRIPT':1,'SELECT':1,'IFRAME':1,'TITLE':1,'TEXTAREA':1,'DT': 1,'DL':1,'DD':1,'FIELDSET':1,'LEGEND':1,'ACRONYM':1,'ADDRESS':1,'LABEL':1}
ADBRITE.INLINE.current_textnode = 0;
ADBRITE.INLINE.unfiltered_keywords = [];
ADBRITE.INLINE.filtered_keywords = {};
ADBRITE.INLINE.filtered_keywords.ab_length = 0;
ADBRITE.INLINE.ad_url = '';
ADBRITE.INLINE.inline_ad_timeout_handle;
ADBRITE.INLINE.keyword = null;
ADBRITE.INLINE.div_keyword = null;
ADBRITE.INLINE.display_ad = false;
ADBRITE.INLINE.keyword_set_inlined = false;

ADBRITE.append_onload = function (func) { 
   var oldonload = window.onload;
   if (typeof window.onload != 'function') {
      window.onload = func;
   } else {
      window.onload = function () {
         oldonload();
         func();
      }
   }
}

ADBRITE.append_script = function (url, span_id) {
   var span_to_append = document.getElementById(span_id);
   var ab_script = document.createElement('script');
   ab_script.src = url;
   ab_script.type = 'text/javascript';
   span_to_append.appendChild(ab_script);
}

ADBRITE.element_in_array = function ( element, element_array ) {
   for ( var k = 0; k < element_array.length; k++ )
      if ( element_array[k] == element ) return true;
   return false;
}

ADBRITE.force_browser_cache_of_image = function (url) {
   (new Image(10,10)).src = url;
}

ADBRITE.find_Pos_X = function (obj) {
   var curleft = 0;
   if (obj.offsetParent) {
      while (obj) {
         curleft += obj.offsetLeft;
         obj = obj.offsetParent;
      }
   } else if (obj.x)
      curleft += obj.x;
   return curleft;
}

ADBRITE.find_Pos_Y = function (obj) {
   var curtop = 0;
   if (obj.offsetParent) {
      while (obj) {
         curtop += obj.offsetTop;
         obj = obj.offsetParent;
      }
   } else if (obj.y)
      curtop += obj.y;
   return curtop;
}

ADBRITE.find_page_width = function () {
   var x;
   if (self.innerWidth) x = self.innerWidth;
   else if (document.documentElement.clientWidth && document.documentElement.clientWidth) x = document.documentElement.clientWidth;
   else if (document.body.clientWidth) x = document.body.clientWidth;
   return x;
}

ADBRITE.find_page_height = function () {
   var y;
   if (self.innerHeight) y = self.innerHeight;
   else if (document.documentElement.clientHeight && document.documentElement.clientHeight) y = document.documentElement.clientHeight;
   else if (document.body.clientHeight) y = document.body.clientHeight;
   return y;
}

ADBRITE.find_scroll_y = function () {
   var y;
   if (self.pageYOffset) y = self.pageYOffset;
   else if (document.documentElement && document.documentElement.scrollTop) y = document.documentElement.scrollTop;
   else if (document.body) y = document.body.scrollTop;
   return y;
}

ADBRITE.INLINE.inline_keyword = function ( keyword, keyword_regex, node_array_index ) {
   ADBRITE.INLINE.keywords_already_inlined.push(keyword);
   ADBRITE.INLINE.keyword_set_inlined = true;

   // add keyword_id to keyword string
   var keyword_id_str = '' + ADBRITE.INLINE.keyword_to_id[keyword];
   ADBRITE.INLINE.config.max_char_for_keywords -= (keyword_id_str.length + 1);
   if ( ADBRITE.INLINE.keywords_ids_already_inlined_str.length > 0 ) {
      ADBRITE.INLINE.keywords_ids_already_inlined_str += ',';
   }
   ADBRITE.INLINE.keywords_ids_already_inlined_str += keyword_id_str;

   // inline the keyword
   var node_to_modify = ADBRITE.INLINE.text_nodes[node_array_index];
   var broken_apart_text = null;
   var pre_text = null;
   var post_text = '';
   var inline_text = null;
   var inline_tag = null;
   var pre_broken_node_text = node_to_modify.data; 
   var parent_node = node_to_modify.parentNode;

   //calculate the original keyword
   var start_id = node_to_modify.data.toLowerCase().indexOf(keyword.toLowerCase());
   var end_id = start_id + keyword.length;
   var orig_keyword = node_to_modify.data.slice(start_id,end_id);
   
   broken_apart_text = node_to_modify.data.split(keyword_regex);

   if (broken_apart_text.length == 0) {
      // this happens when the keyword is the only word in the node
      pre_text = document.createTextNode('');
      post_text = document.createTextNode('');
   } else if (broken_apart_text.length == 1) {
      // happens when the keyword is either at the beginning or the end of the node
      if (pre_broken_node_text.toLowerCase().indexOf(keyword.toLowerCase()) == 0) {
      // word to inline is at the beginning of the node
         pre_text = '';
         post_text = broken_apart_text[0];
      } else {
      // word to inline is at the end of the node
         pre_text = broken_apart_text[0];
         post_text = '';
      }

      pre_text = document.createTextNode(pre_text);
      post_text = document.createTextNode(post_text);
   } else {
      if (broken_apart_text.length > 2) {
         for (var i = 1; i < (broken_apart_text.length -1); i++)
            post_text += broken_apart_text[i] + keyword;
         post_text += broken_apart_text[(broken_apart_text.length - 1)];
      } else
         post_text = broken_apart_text[1];

      pre_text = document.createTextNode(broken_apart_text[0]);
      post_text = document.createTextNode(post_text);
   }

   // create the inlined keyword tag
   if (!document.getElementById('AdBriteInlineAd_'+keyword)) {
      inline_tag = document.createElement('a');
      inline_tag.target = (ADBRITE.INLINE.config.open_in_new_window) ? '_blank' : '_top';
      inline_tag.display = "inline";
      inline_tag.id = 'AdBriteInlineAd_' + keyword;
      inline_tag.keyword = keyword;
      inline_tag.name = 'AdBriteInlineAd_' + keyword;
      inline_tag.style.cursor = 'pointer';
      inline_tag.style.color = ADBRITE.INLINE.inline_text_color;
      inline_tag.style.textDecoration = 'none';
      inline_tag.onmouseover = ADBRITE.INLINE.prep_and_show_inline_ad;
      inline_tag.onmouseout = ADBRITE.INLINE.hide_inline_ad_timer;
      inline_tag.style.background = "url('" + ADBRITE.INLINE.inline_underline + "') bottom repeat-x";
      inline_tag.style.marginBottom = "-2px";
      inline_tag.style.paddingBottom = "2px";
      inline_tag.innerHTML = orig_keyword;
      parent_node.replaceChild(post_text, node_to_modify);
      parent_node.insertBefore(inline_tag, post_text);
      parent_node.insertBefore(pre_text, inline_tag);
      ADBRITE.INLINE.text_nodes = [];
      ADBRITE.INLINE.populate_text_nodes();

   }
}

ADBRITE.INLINE.create_inline_div = function () {
   if (!document.getElementById('adbrite_inline_div')) {

      //outermost div
      var inline = document.createElement('ispan');
      inline.className = 'noadbriteinline';
      inline.id = 'adbrite_inline_div';
      inline.onmouseover = ADBRITE.INLINE.reset_display_inline_ad;
      inline.onmouseout = ADBRITE.INLINE.hide_inline_ad_timer;
      var isty = inline.style;
      isty.display = 'none';
      isty.position='absolute';
      isty.zIndex = '32767';
      isty.width=ADBRITE.INLINE.ad_width + 'px';
      isty.height=ADBRITE.INLINE.ad_height + 'px';
      isty.overflow = "hidden";
      isty.backgroundImage='url(' + ADBRITE.INLINE.ad_background + ')';
      isty.backgroundPosition='top';
      isty.backgroundRepeat='no-repeat';
      isty.opacity=.95;
      isty.filter='alpha(opacity=95)';
      isty.textAlign='left';
      document.getElementsByTagName('body')[0].appendChild(inline);

      //create & append link for logo
      var linkBack = document.createElement('ispan');
      var lbsty = linkBack.style;
      lbsty.display = "inline";
      lbsty.whiteSpace = "nowrap";
      lbsty.position = "absolute";
      lbsty.top = "9px";
      lbsty.right = "14px";
      lbsty.hieght = "14px";
      lbsty.width = "40px";
      lbsty.cursor = "pointer";
      lbsty.fontSize = "14px";
      lbsty.lineHeight = "14px";
      linkBack.innerHTML = '&nbsp;';
      linkBack.onclick = function(){window.open('http://'+ADBRITE.INLINE.supplier)}
      inline.appendChild(linkBack);

      //create & append link for 'About this advertisement'
      var about = document.createElement('ispan');
      var absty = about.style;
      absty.fontSize = "11px";
      absty.display = "inline";
      absty.fontWeight = "bold";
      absty.color = "#FFF";
      absty.position = "absolute";
      absty.fontFamily = "Arial,Helvetica,sans-serif";
      absty.top = "8px";
      absty.left = "10px";
      absty.cursor = "pointer";
      about.onclick = function () {window.open('http://' + ADBRITE.INLINE.supplier + '/mb/about_inline.php?sid=' + ADBRITE.INLINE.config.sid,'AboutInline', 'menubar=no,location=no,resizeable=no,scrollbars=no,status=no,left=100,top=100,height=300,width=300');}
      about.appendChild(document.createTextNode("About this advertisement"));
      inline.appendChild(about);

      //create & append wrapper (for padding purposes)
      var w = document.createElement('ispan');
      w.style.display = 'block';
      w.style.width = (ADBRITE.INLINE.ad_width - 34) + 'px';
      inline.appendChild(w);

      //create & append anchor
      var a = document.createElement('a');
      a.id = 'adbrite-inline-target-url';
      var asty = a.style;
      asty.padding = '0';
      asty.margin = '0';
      asty.border = 'none';
      asty.color = "#000";
      asty.fontWeight = 'normal';
      asty.textDecoration = 'none';
      asty.background = 'transparent';
      asty.cursor = 'pointer';
      asty.position = 'relative';
      asty.top = '33px';
      asty.left = '24px';
      w.appendChild(a);
      
      //create & append ad_headline
      var head = document.createElement('ispan');
      head.id = "adbrite-inline-headline";
      var hsty = head.style;
      hsty.fontSize = "20px";
      hsty.fontFamily = "Arial,Helvetica,sans-serif";
      hsty.fontWeight = "bold";
      hsty.color = "#00F";
      hsty.textDecoration = "underline";
      hsty.whiteSpace = "nowrap";
      a.appendChild(head);
      a.appendChild(document.createElement('br'));

      //create and append ad_text
      var text = document.createElement('ispan');
      text.id = "adbrite-inline-adtext";
      var tsty = text.style;
      tsty.fontSize = "13px";
      tsty.lineHeight= "15px";
      tsty.fontFamily = "Verdana,Arial,Helvetica,sans-serif";
      a.appendChild(text);
      a.appendChild(document.createElement('br'));

      //create and append display url
      var url = document.createElement('ispan');
      url.id = "adbrite-inline-display-url";
      urlsty = url.style;
      urlsty.fontSize = "11px";
      urlsty.lineHeight= "18px";
      urlsty.fontFamily = "Verdana,Arial,Helvetica,sans-serif";
      urlsty.textDecoration = "underline";
      urlsty.color = "#008000";
      a.appendChild(url);

      //create and append "your ad here" link
      var yah = document.createElement('ispan');
      yah.id = "adbrite-inline-your-ad-here";
      var ysty = yah.style;
      ysty.display = "inline";
      ysty.position = "absolute";
      ysty.bottom = "13px";
      ysty.right = "15px";
      ysty.fontFamily = "Verdana,Arial,Helvetica,sans-serif";
      ysty.fontSize = "11px";
      ysty.cursor = "pointer";
      ysty.color = "#00F";
      ysty.textDecoration = 'underline';
      yah.onclick = function () {window.open("http://www.adbrite.com/mb/commerce/purchase_form.php?opid=" + ADBRITE.INLINE.config.sid);}
      yah.appendChild(document.createTextNode('Your Ad Here'));
      inline.appendChild(yah);
   } 
}

ADBRITE.INLINE.prep_and_show_inline_ad = function () {
   ADBRITE.INLINE.keyword = this.keyword; 

   if ( ADBRITE.INLINE.div_keyword != ADBRITE.INLINE.keyword ) {
      ADBRITE.INLINE.display_ad = true;
      var page_width = ADBRITE.find_page_width();
      var page_height = ADBRITE.find_page_height();
      var scroll_y = ADBRITE.find_scroll_y();
      var div_left = ADBRITE.find_Pos_X(this);
      var div_top = ADBRITE.find_Pos_Y(this);

      var adbrite_inline_div = document.getElementById('adbrite_inline_div');
      adbrite_inline_div.style.display = 'none';

      // find the x value
      if ((div_left + ADBRITE.INLINE.ad_width) > page_width + 30)
         adbrite_inline_div.style.left = (div_left - (div_left + ADBRITE.INLINE.ad_width - page_width) - 30) + 'px';
      else
         adbrite_inline_div.style.left = div_left + 'px';

      // find the y value
      if ((div_top - ADBRITE.INLINE.ad_height) < 0) adbrite_inline_div.style.top = (div_top + 20) + 'px';
      else if ((div_top - ADBRITE.INLINE.ad_height) < scroll_y ) adbrite_inline_div.style.top = (div_top + 20) + 'px';
      else adbrite_inline_div.style.top = (div_top - ADBRITE.INLINE.ad_height) + 'px';
      ADBRITE.INLINE.display_inline_ad();
   } else
      ADBRITE.INLINE.reset_display_inline_ad();
}

ADBRITE.INLINE.display_inline_ad = function () {
   if (ADBRITE.INLINE.keyword != ADBRITE.INLINE.div_keyword) {
      ADBRITE.INLINE.div_keyword = ADBRITE.INLINE.keyword;
      var adbrite_inline_div = document.getElementById('adbrite_inline_div');
      // reset the div inbetween keywords
      ADBRITE.INLINE.populate_inline_div('Loading...', '', '','');
      ADBRITE.INLINE.load_inline_ad();
      adbrite_inline_div.style.display = 'block';
   }
}

ADBRITE.INLINE.load_inline_ad = function () {
   var query_string = '?sid=' + ADBRITE.INLINE.config.sid + '&keyword=' + ADBRITE.INLINE.keyword_to_id[ADBRITE.INLINE.keyword];
   var url = 'http://' + ADBRITE.INLINE.config.hostname + '/adserver/inline_ad.php' + query_string + '&random=' + Math.round(Math.random()*99999);
   ADBRITE.append_script(url, ADBRITE.INLINE.span_id);
}

ADBRITE.INLINE.populate_and_display_inline_div = function (ad_headline, ad_text, ad_url, display_url) {
   ADBRITE.INLINE.populate_inline_div(ad_headline, ad_text, ad_url, display_url);
   var keyword_span_id = 'AdBriteInlineAd_' + ADBRITE.INLINE.keyword;
   ADBRITE.INLINE.ad_url = ad_url;
   document.getElementById(keyword_span_id).href = ad_url;
}

ADBRITE.INLINE.populate_inline_div = function (ad_headline, ad_text, ad_url, display_url) {
   var a = document.getElementById('adbrite-inline-target-url');
   a.href = ad_url;
   a.target = (ADBRITE.INLINE.config.open_in_new_window) ? '_blank' : '_top';
   var head = document.getElementById('adbrite-inline-headline');
   head.innerHTML = unescape(decodeURIComponent(ad_headline));
   var text = document.getElementById('adbrite-inline-adtext');
   text.innerHTML = unescape(decodeURIComponent(ad_text));
   var url = document.getElementById('adbrite-inline-display-url');
   if (display_url && display_url != '') {
      url.innerHTML = unescape(decodeURIComponent(display_url));
      url.href = ad_url;
      url.target = (ADBRITE.INLINE.config.open_in_new_window) ? '_blank' : '_top';
   } else {
      url.innerHTML = '';
      url.href = '';
      url.target = '';
   }
}

ADBRITE.INLINE.hide_inline_ad_timer = function () {
   ADBRITE.INLINE.display_ad = false;
   ADBRITE.INLINE.inline_ad_timeout_handle = window.setTimeout(ADBRITE.INLINE.hide_inline_ad, 1000);
}

ADBRITE.INLINE.hide_inline_ad = function () {
   if ( ADBRITE.INLINE.display_ad == false) {
      var keyword_span_id = 'AdBriteInlineAd_' + ADBRITE.INLINE.keyword;
      document.getElementById(keyword_span_id).onclick = '';
      ADBRITE.INLINE.div_keyword = null;
      document.getElementById('adbrite_inline_div').style.display = 'none';
   }
}

ADBRITE.INLINE.reset_display_inline_ad = function () {
   ADBRITE.INLINE.display_ad = true;
   window.clearTimeout(ADBRITE.INLINE.inline_ad_timeout_handle);
}

ADBRITE.INLINE.reset_text_nodes = function () {
   ADBRITE.INLINE.text_nodes = "";
   ADBRITE.INLINE.text_nodes = [];
}

ADBRITE.INLINE.populate_text_nodes = function () {
   if ( ADBRITE.INLINE.text_nodes.length == 0 ) {
      ADBRITE.INLINE.scan_nodes( document.getElementsByTagName('body')[0], true );
      if ( ADBRITE.INLINE.adbriteinline_tags.length > 0) {
         ADBRITE.INLINE.reset_text_nodes();
         var length = ADBRITE.INLINE.adbriteinline_tags.length;
         for ( var i=0; i < length; i++ )
            ADBRITE.INLINE.scan_nodes( ADBRITE.INLINE.adbriteinline_tags[i], false );
      }
   }
}

ADBRITE.INLINE.scan_nodes = function (node, log_classname) {
   // log the adbriteinline classes
   if ( log_classname == true && ADBRITE.INLINE.tags_to_ignore[node.nodeName.toUpperCase()] != 1 )
      if ( node.className && node.className.toLowerCase() == 'adbriteinline' ) 
         ADBRITE.INLINE.adbriteinline_tags.push(node);

   if ( node.nodeType == 3 ) {
      // remove all empty text nodes
      if ( node.data.replace(/\s+/g, '') ) ADBRITE.INLINE.text_nodes.push(node);
   } else {
      for ( var next_node = node.firstChild; next_node != null; next_node = next_node.nextSibling ) {
         var scan_node = true;
         if ( ADBRITE.INLINE.tags_to_ignore[next_node.nodeName.toUpperCase()] == 1 ) scan_node = false;
         if ( next_node.className && (next_node.className.toLowerCase()).indexOf('noadbriteinline') != -1 ) scan_node = false;
         if ( scan_node ) ADBRITE.INLINE.scan_nodes(next_node, log_classname);
      }
   }
}

ADBRITE.INLINE.find_keyword = function ( keyword ) {
   var keyword_regex = new RegExp("\\b" + keyword + "\\b", 'i');
   for ( var i = 0; i < ADBRITE.INLINE.text_nodes.length; i++ ) {
      if ( ADBRITE.INLINE.text_nodes[i].data.search( keyword_regex ) > -1 ) {
        ADBRITE.INLINE.inline_keyword( keyword, keyword_regex, i );
        break;
      }
   } 
}

ADBRITE.INLINE.get_next_keyword = function () {
   var keyword = "";
   // remove any empty keyword sets until a non-empty set is found, or the array is empty
   while ( ADBRITE.INLINE.keywords_to_inline.length > 0 && ADBRITE.INLINE.keywords_to_inline[0].length == 0 )
      ADBRITE.INLINE.keywords_to_inline.shift();

   if ( ADBRITE.INLINE.keywords_to_inline.length > 0 )
      keyword = ADBRITE.INLINE.keywords_to_inline[0][0];

   // remove keyword from keyword set
   ADBRITE.INLINE.remove_keyword_from_list();
   return keyword;
}

ADBRITE.INLINE.remove_keyword_from_list = function () {
   // keyword was found, remove the keyword set
   if ( ADBRITE.INLINE.keyword_set_inlined == true ) {
      ADBRITE.INLINE.keyword_set_inlined = false;
      ADBRITE.INLINE.keywords_to_inline.shift();
   } else {
      // keyword was not found, remove keyword from list
      // if keyword is only keyword is set, remove set
      if ( ADBRITE.INLINE.keywords_to_inline[0].length == 1 ) {
         ADBRITE.INLINE.keywords_to_inline.shift();
      } else {
         ADBRITE.INLINE.keywords_to_inline[0].shift();
      }
   }
}

ADBRITE.INLINE.find_and_inline_keywords = function () {
   while ( ADBRITE.INLINE.keywords_to_inline.length > 0 && ADBRITE.INLINE.keywords_already_inlined.length < ADBRITE.INLINE.config.max_words_to_inline ) {
      var keyword_to_find = ADBRITE.INLINE.get_next_keyword();
      if ( keyword_to_find ) {
         ADBRITE.INLINE.find_keyword ( keyword_to_find );
      }
   }
}

ADBRITE.INLINE.check_scanning_status = function () {
   var continue_scan = true;
   if ( ADBRITE.INLINE.keywords_already_inlined.length >= ADBRITE.INLINE.config.max_words_to_inline ) continue_scan = false;	// already inlined enough words
   if ( ADBRITE.INLINE.text_nodes.length < 1 ) continue_scan = false;	// no nodes to scan/inline
   if ( ADBRITE.INLINE.text_nodes.length == ADBRITE.INLINE.current_textnode ) continue_scan = false;   // reached the last node already
   if ( ADBRITE.INLINE.unfiltered_keywords.length > 0 && ADBRITE.INLINE.filtered_keywords.ab_length != 0) continue_scan = false; // filtered_keyword_array is full
   return continue_scan;
}

ADBRITE.INLINE.build_unfiltered_keyword_array = function () {
   if ( ADBRITE.INLINE.unfiltered_keywords.length == 0 ) {
      var unfiltered_keyword_str = ADBRITE.INLINE.text_nodes[ADBRITE.INLINE.current_textnode].data;
      if ( unfiltered_keyword_str > ADBRITE.INLINE.max_char_for_textnodes )
         unfiltered_keyword_str = unfiltered_keyword_str.slice( 0, ADBRITE.INLINE.max_char_for_textnodes );
      unfiltered_keyword_str = unfiltered_keyword_str.replace(/\s+/g, ' ');
      ADBRITE.INLINE.unfiltered_keywords = unfiltered_keyword_str.split(' ');      
   }
}

ADBRITE.INLINE.keyword_in_stopword_list = function ( keyword ) {
   return ( ADBRITE.stopword_list[keyword] ) ? true : false;
}

ADBRITE.INLINE.build_filtered_keyword_array = function () {
   while ( ADBRITE.INLINE.unfiltered_keywords.length > 0 ) {
      if ( ADBRITE.INLINE.filtered_keywords.ab_length + ADBRITE.INLINE.unfiltered_keywords[0].length > ADBRITE.INLINE.config.max_char_for_keywords ) break;

      var keep_keyword = true;
      var keyword = ADBRITE.INLINE.unfiltered_keywords.shift();

      if ( keyword.length < ADBRITE.INLINE.config.min_char_per_keyword ) keep_keyword = false;
      else if ( keyword.match(/\W/) ) keep_keyword = false;
      else if ( ADBRITE.element_in_array( keyword, ADBRITE.INLINE.keywords_already_inlined ) ) keep_keyword = false;
      else if ( ADBRITE.INLINE.keyword_in_stopword_list(keyword) ) keep_keyword = false;
      
      if (keep_keyword == true) {
         if ( !ADBRITE.INLINE.filtered_keywords[keyword] ) {
            ADBRITE.INLINE.filtered_keywords.ab_length = ADBRITE.INLINE.filtered_keywords.ab_length + keyword.length;
            ADBRITE.INLINE.filtered_keywords[keyword] = 1;
         }
      }
   }
}

ADBRITE.INLINE.update_current_textnode = function () {
   if ( ADBRITE.INLINE.unfiltered_keywords.length == 0 ) ADBRITE.INLINE.current_textnode = ADBRITE.INLINE.current_textnode + 1;
}

ADBRITE.INLINE.scan = function () {
   var continue_scanning = ADBRITE.INLINE.check_scanning_status();

   while ( continue_scanning == true ) {
      ADBRITE.INLINE.build_unfiltered_keyword_array();
      ADBRITE.INLINE.build_filtered_keyword_array();
      ADBRITE.INLINE.update_current_textnode();
      continue_scanning = ADBRITE.INLINE.check_scanning_status();
   }
}

ADBRITE.INLINE.converg_filtered_keywords_toString = function () {
   var str = "";
   for ( keyword in ADBRITE.INLINE.filtered_keywords ) {
      if ( keyword == 'ab_length' ) continue;
      if ( str ) str += ",";
      str += keyword;
   }
   return str;
}

ADBRITE.INLINE.send_keyword = function() {
   if ( ADBRITE.INLINE.filtered_keywords.ab_length > 0 && ADBRITE.INLINE.config.max_adserver_calls > 0) {
      ADBRITE.INLINE.config.max_adserver_calls = ADBRITE.INLINE.config.max_adserver_calls - 1;
      var appended_keyword_str = ADBRITE.INLINE.converg_filtered_keywords_toString(); 
      ADBRITE.INLINE.filtered_keywords = {};
      ADBRITE.INLINE.filtered_keywords.ab_length = 0;
      var url = 'http://' + ADBRITE.INLINE.config.hostname + 
		  '/adserver/inline_keywords.php?sid=' + ADBRITE.INLINE.config.sid +
		  '&keyword_ids=' + ADBRITE.INLINE.keywords_ids_already_inlined_str + 
		  '&keywords=' + appended_keyword_str;
      ADBRITE.append_script(url, ADBRITE.INLINE.span_id);
   }
}

ADBRITE.INLINE.inline = function () {
   ADBRITE.INLINE.create_inline_div();
   ADBRITE.INLINE.populate_text_nodes();
   ADBRITE.INLINE.find_and_inline_keywords();
   ADBRITE.INLINE.scan();
   ADBRITE.INLINE.send_keyword();
}

ADBRITE.INLINE.get_url_based_keywords = function () {
   var url = 'http://' + ADBRITE.INLINE.config.hostname + '/adserver/inline_url_keywords.php?sid=' + ADBRITE.INLINE.config.sid;
   ADBRITE.append_script(url, ADBRITE.INLINE.span_id);
}

if ( ab_isMinMoz1_5 || ab_isMinIE6 ) {
   if ( !ADBRITE.INLINE.is_inlined ) {
      ADBRITE.INLINE.is_inlined = true;
      // force all images into the browser cache
      ADBRITE.force_browser_cache_of_image(ADBRITE.INLINE.ad_background);   
      ADBRITE.append_onload(ADBRITE.INLINE.get_url_based_keywords);
   }
}

total_toc_items = 0;
current_overID  = "";
last_overID     = "";
vc              = 0;
vc_preliminary  = 0; /* This preliminary version-check is put in vc only
  after all used "on mouse over" pictures are created and
  the web-page html is almost completely loaded... */

function version_check()
{
  if ( ( (navigator.appName=="Netscape") && (navigator.appVersion.charAt(0)>=3) )
    || (navigator.appVersion.charAt(0)>=4) ) vc_preliminary = 1
}

function toc_item(img_name,width,height)
{
  img_prefix = "images/" + img_name;
  this.slide_img = new Image(width,height);
  this.slide_img.src = img_prefix + ".gif";
}

function new_toc_item(img_name,width,height)
{
  toc_item[img_name] = new toc_item(img_name,width,height);
}

function toc_mouseover(itemID)
{
  current_overID = itemID;
  if ((current_overID != last_overID) && vc)
  {
    document["question1"].src = toc_item[current_overID].slide_img.src;
    document["question2"].src = toc_item[current_overID].slide_img.src;
    last_overID = current_overID;
  }
}

function toc_mouseout()
{
  if ((current_overID != "") && vc)
  {
    document["question1"].src = toc_item["question"].slide_img.src;
    document["question2"].src = toc_item["question"].slide_img.src;
  }
  current_overID = "";
  last_overID = "";
}

version_check();
if (vc_preliminary)
{
  new_toc_item("question",32,32);
  new_toc_item("basic",32,32);
  new_toc_item("harder",32,32);
  new_toc_item("math",32,32);
  new_toc_item("arith",32,32);
  new_toc_item("logical",32,32);
  new_toc_item("teasers",32,32);
  new_toc_item("complex",32,32);
  new_toc_item("quiz1",32,32);
  new_toc_item("quiz2",32,32);
  new_toc_item("tests",32,32);
  new_toc_item("joke",32,32);
  new_toc_item("nl_uk_large",32,32);
  new_toc_item("uk_nl_large",32,32);
  new_toc_item("allpuzzles_nl",32,32);
  new_toc_item("allpuzzles_us",32,32);
}

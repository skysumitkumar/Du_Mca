/*
 * Build version Vermont-12.0.0-122
 */

rsinetsegs = [];
var rsi_exp=new Date(rsi_now.getTime()+2419200000);
var rsi_dom=location.hostname;
rsi_dom=rsi_dom.replace(/.*(\.[\w\-]+\.[a-zA-Z]{3}$)/,'$1');
rsi_dom=rsi_dom.replace(/.*(\.[\w\-]+\.\w+\.[a-zA-Z]{2}$)/,'$1');
rsi_dom=rsi_dom.replace(/.*(\.[\w\-]{3,}\.[a-zA-Z]{2}$)/,'$1');
document.cookie=('rsi_segs='+rsinetsegs.join('|')+';expires='+rsi_exp.toGMTString()+';path=/;domain='+rsi_dom);
  
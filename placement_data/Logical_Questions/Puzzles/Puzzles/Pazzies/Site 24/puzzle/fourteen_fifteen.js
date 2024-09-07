// fourteen_fifteen.js version 2.000  29-03-2004  E.R. van Veldhoven
// (c) 2004-2005 RJE-productions. All rights reserved.

var
  moves=0;
  puzimgdir="";
  movestext="";

with (window.location)
{
  puzimgdir=href.substring(0,href.lastIndexOf("/"))
  puzimgdir=puzimgdir.substring(0,puzimgdir.lastIndexOf("/")+1)+"puzimg/"
}

function tile_item(img_name,width,height)
{
  this.tile=new Image(width,height);
  this.tile.src=puzimgdir+img_name+".gif";
}

function new_tile_item(img_name,img_src,width,height)
{
  tile_item[img_name]=new tile_item(img_src,width,height);
}

function make_board()
{
  for (var i=0; i<16; i++)
  {
    if(i==13) this[i]="tile"+14
    else
    if(i==14) this[i]="tile"+13
    else this[i]="tile"+i
  }
  return(this);
}

function draw_board()
{
  for (var i=0; i<16; i++)
  {
    if (oldboard[i]!=board[i])
    {
      document["tile"+i].src=tile_item[board[i]].tile.src;
      oldboard[i]=board[i];
    }
  }
//NN4 can't work with static layers
//  if(document.layers)
//  {
//    //NN4
//    var layer=document.layers["nrofmoves"];
//    layer.document.open();
//    layer.document.write(moves);
//    layer.document.close();
//  }
//  else
  if(document.all)
  {
    //IE
    layer=document.all["nrofmoves"];
    layer.innerHTML=movestext+": "+moves;
  }
  else
  if(!document.all&&document.getElementById)
  {
    //NN6+
    layer=document.getElementById("nrofmoves");
    layer.innerHTML=movestext+": "+moves;
  }
}

function move()
{
  if (moves<100000) moves++;
}

function tile_click(t)
{
  var
    i,j,m,n,x,y;
  for (i=0; i<16; i++) if (board[i]=="tile15") j=i;
  x=j%4;
  y=Math.floor(j/4);
  if (t>=0)
  {
    m=t%4;
    n=Math.floor(t/4);
  }
  else
  {
    m=x;
    n=y;
    if (t==-1 && n>0) n--
    else
    if (t==-2 && m>0) m--
    else
    if (t==-3 && n<3) n++
    else
    if (t==-4 && m<3) m++
  }
  if (x==m)
  {
    if (n<y)
    {
      for (i=y; i>n; i--) board[4*i+x]=board[4*(i-1)+x];
      board[4*n+x]="tile15";
      move();
    }
    else
    if (n>y)
    {
      for (i=y; i<n; i++) board[4*i+x]=board[4*(i+1)+x];
      board[4*n+x]="tile15";
      move();
    }
  }
  else
  if (y==n)
  {
    if (m<x)
    {
      for (i=x; i>m; i--) board[4*y+i]=board[4*y+i-1];
      board[4*y+m]="tile15";
      move();
    }
    else
    if (m>x)
    {
      for (i=x; i<m; i++) board[4*y+i]=board[4*y+i+1];
      board[4*y+m]="tile15";
      move();
    }
  }
  if (t>=0) draw_board();
}

function resetclick()
{
  moves=0;
  delete board;
  board=new make_board;
  draw_board();
}

for (var i=0; i<16; i++) new_tile_item("tile"+i,"tile"+(i+1),32,32);

var
  board=new make_board;
  oldboard=new make_board;

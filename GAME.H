#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<graphics.h>

#define eni1(x,y,z,g) ene1(x,y,z,g)
void ene1(int &x,int &y,int &z,int &g)
{
if(z==1)
 {
      setcolor(0);
      outtextxy(x, y,"*");
      y=y+1;
      setcolor(15);
      outtextxy(x,y,"*");
 }
if(z==2)
 {
      setcolor(0);
      outtextxy(x, y,"*");
      y=y-1;
      setcolor(15);
      outtextxy(x,y,"*");
 }
++g;
if(!(g%20))
 {
  if(z==1)
  {z=2;g=0;}
  else if(z==2)
  {z=1;g=0;}
 }
}

#define eni2(x,y,z,g) ene2(x,y,z,g)
void ene2(int &x,int &y,int &z,int &g)
{ if(z==1)
 {    setcolor(0);
      outtextxy(x,y,"*");
      x=x+1;
      setcolor(15);
      outtextxy(x,y,"*");
   }
  if(z==2)
 {    setcolor(0);
      outtextxy(x, y,"*");
      x=x-1;
      setcolor(15);
      outtextxy(x,y,"*");
 }
++g;
if(!(g%25))
 {
  if(z==1)
  {z=2;g=0;}
  else if(z==2)
  {z=1;g=0;}
 }
}

#define eni3(x,y,z,xp,yp,u,g) ene3(x,y,z,xp,yp,u,g)
void ene3(int &x,int &y,int &z,int &xp,int &yp,int &u,int &g)
{
setcolor(12);
outtextxy(x,y,"!");
setcolor(0);
if(u==4)
if((fabs(yp-y)<2)&&(fabs(xp-x)<=40))
{
u=1;
}
if(u==0||u==3||g==40)
{
 putpixel(z+3,y,0);
 if(u==3)
 {
 z=x;u=4;
 }
 if(g==40)
 {u=4;z=x;g=0;}
 else
 u=1;
}
if(u==1)
{
 z=z+1;
 putpixel(z+3,y,15);
 u=0;
 g++;
}
}

#define t(x1,x2,y,r) T(x1,x2,y,r)
void T(int &x1,int &x2,int &y,int r)
{
 int b=(x1>x2?x2:x1);
 int c=(x1>x2?x1:x2);
 x1=b;
 x2=c;
 for(int j=b+3;j<=c+3;j++)
  {   putpixel(j,y,r);
   }
}
#include<game.h>              //header file
int x,y;                      //player variables
int o,d,k,l,m,n,z,w,h,wer;        //functioning variables
//terrain variables
int x1[]={20 ,120,190};
int x2[]={130,100,310};
int yt[]={155,128,160};
//enemies variables
//initialise eni2 after eni1
int x0[]={330,320,19 };
int y0[]={140,140,149};
int c0[]={1  ,2  ,1  };
int g0[]={0  ,0  ,0  };
int X[]={80 };
int Y[]={148};
int Z[]={80 };
int U[]={4  };
int G[]={0  };
void game_over()
{
setcolor(15);
outtextxy(x,y,"XX");
outtextxy(250,1,"GAME OVER");
delay(500);
wer=3;
getch();
}
void out()
{
for(int u=0;u<n;u++)
{if((fabs(x-x0[u])<=4)&&(fabs(y0[u]-y)<=6))
{
game_over();
}
}
for(int i=0;i<1;i++)
{
if(((Y[i]-y<6)&&(y<=Y[i]))&&(x-Z[i]==0))
{
game_over();
}
}
}
void terr()
{
h=3;
for(int u=0;u<h;u++)
{
t(x1[u],x2[u],yt[u],10);
}
}
void enimy()
{int p=2;
n=3;//no of eni1 and n = total number of eni(s)
for(int u=0;u<p;u++)
{eni1(x0[u],y0[u],c0[u],g0[u]);}
for(int k=u;k<n;k++)
{eni2(x0[k],y0[k],c0[k],g0[k]);}
for(int bv=0;bv<1;bv++)
{
for(int i=0;i<h;i++)
{
for(int j=x1[i];j<=x2[i];j++)
{
if((j-Z[bv]==1)&&(Y[bv]==yt[i]))
{U[bv]=3;}
}
}
eni3(X[bv],Y[bv],Z[bv],x,y,U[bv],G[0]);
}
out();
}
void check()
{
o=0;d=0;
out();
for(int i=0;i<h;i++)
{
for(int j=x1[i];j<=x2[i];j++)
{if((fabs(m-j)==0)&&(yt[i]-y==7))
{o=1;}
if((fabs(m-j)==0)&&(((yt[i]-z<7)&&(yt[i]-z>=0))||(yt[i]-z==0)))
{d=1;}
if(m<=0||m>=getmaxx()||z<=0||z>=getmaxy())
{d=1;}
}
}
}
void move_left();
void move_right();
void fall()
{
char g;
check();
while(!o&&wer!=3)
{  enimy();
   if(y>=180)
   {
   game_over();
   }
   else
   {
    setcolor(0);
    outtextxy(x,y,"!");
    y=y+1;
    gotoxy(x,y);
    setcolor(15);
    outtextxy(x, y,"!");
   check();
   if(!d)
   {
   if(kbhit())
   {g=getch();l=1;}
   if(l)
   {
   if(g==75)
   {k=2;
   move_left();
   l=0;
   k=2;
   }
   if(g==77)
   {
   k=2;
   move_right();
   l=0;
   k=2;
   }
   }
  }
 }
delay(50);
}
}
void move_left()
{  m=x-k;
   z=y;
   check();
   if(!d)
   {
      setcolor(0);
      outtextxy(x,y,"!");
      x=x-k;
      setcolor(15);
      outtextxy(x,y,"!");
      k=1;
   }
 if(!o&&l!=1)
  {fall();}
  }
void move_right()
{  m=x+k;
   z=y;
    check();
   if(!d)
   {
      setcolor(0);
      outtextxy(x,y,"!");
      x=x+k;
      setcolor(15);
      outtextxy(x,y,"!");
      k=1;
   }
 if(!o&&l!=1)
  {fall();}
}
void move_up()
{int c;
 l=0;
 char g;
 for(int i=1;i<=2&&wer!=3;i++)
  {
   for(int j=1;j<=40&&wer!=3;j++)
   {
   enimy();
   c=(i<2?-1:1);
   z=y+c;
   m=x;
   check();
   if(d)
   {j=40;}
   if(!d)
   {
      setcolor(0);
      outtextxy(x,y,"!");
     y=y+c;
   if(kbhit())
   {g=getch();l=1;}
   if(l)
   {
   if(g==75)
   {k=2;
   move_left();
   l=0;
   k=2;
   }
   if(g==77)
   {
   k=2;
   move_right();
   l=0;
   k=2;
   }
   }
      setcolor(15);
      outtextxy(x,y,"!");
   }
 delay(50);
  }
  if(wer!=3)
  {break;}
 }
 check();
 if(!o)
 {fall();}
}
#define stage1(r) stAge1(r)
void stAge1(int &r)
{
wer=1;
int a=0;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"\\tc\\bgi");
cleardevice();
char t;
x=120;
y=140;
terr();
cout<<getmaxx()<<" "<<getmaxy();
setcolor(15);
outtextxy(x,y,"!");
do
{
if(wer!=3)
{
enimy();
}
if(wer==3)
{break;}
if(kbhit())
{
t=getch();
if(t==0x48&&wer!=3)
  {
  l=0;
  move_up();
  t=0;
  continue;
  }
if(t==0x4b&&wer!=3)
  {
   k=2;
   l=0;
   move_left();
   t=0;
  continue;
  }
if(t==0x4d&&wer!=3)
  {
  k=2;
  l=0;
  move_right();
  t=0;
  continue;
  }
if(t==27||wer==3)
  {
  a=1;
  break;
  }
}
delay(50);
}while(a!=1);
r=2;
closegraph();
}



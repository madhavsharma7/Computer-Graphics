#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
int i,xmax,ymax;
int startx,starty;
int stopped=0;

void drawFlower(int i)
{
setcolor(GREEN);
line(xmax/2,ymax/2,xmax/2,ymax/2+100);
setcolor(BROWN);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(xmax/2,ymax/2,10+1.8*i,5+.6*i);
fillellipse(xmax/2,ymax/2,5+.6*i,10+1.8*i);
setcolor(BROWN);
setfillstyle(SOLID_FILL,RED);
fillellipse(xmax/2,ymax/2,5+.6*i,5+.6*i);
}

void drawBee(int i)
{
startx+=2;
starty+=7*sin(i);
setcolor(BROWN);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(startx,starty,12,5);
setcolor(BLUE);
fillellipse(startx,starty,5,10*(i%2));
fillellipse(startx+8,starty-3,1,1);
fillellipse(startx+8,starty+3,1,1);
line(startx+9,starty-2,startx+11,starty-5);
line(startx+9,starty+2,startx+11,starty+5);
}

void main()
{
int max,may,i,t;
int gm=DETECT,gd;
initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
xmax=getmaxx();
ymax=getmaxy();
startx=xmax/2-100;
starty=ymax/2;
setbkcolor(WHITE);
getch();
for(i=0;i<20;i++)
{
delay(120);
cleardevice();
drawFlower(i);
}
t=i;

for(i=0;startx+i<xmax-60;i++)
{
delay(90);
cleardevice();
drawFlower(t);
drawBee(i);
if(stopped==0&&abs(startx-xmax/2)<10&&abs(starty-ymax/2)<15)
{
delay(2500);
stopped=1;
}
}
getch();
closegraph();
}
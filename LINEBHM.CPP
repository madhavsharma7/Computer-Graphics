#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bla(int x1,int y1,int x2,int y2)
{
int dx,dy,x,y,xend,p;
dx=(x2-x1);
dy=(y2-y1);
p=(2*dy)-dx;
if(x1>x2)
{
x=x2;
y=y2;
xend=x1;
}
else
{
x=x1;
y=y1;
xend=x2;
}
putpixel(x,y,1);
while(x<xend)
{
x=x+1;
if(p<0)
p=p+2*dy;
else
{
y=y+1;
p-p+2*(dy-dx);
}
putpixel(x,y,1);
}
}
void main()
{
int x1,y1,x2,y2;
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("enter the x1 and yl value\n");
scanf("%d %d", &x1,&y1);
printf("enter the x2 and y2 value\n");
scanf("%d %d",&x2,&y2);
printf("line is shown below\n");
bla(x1,y1,x2,y2);
outtextxy(150,150,"Hardika");
getch();
}

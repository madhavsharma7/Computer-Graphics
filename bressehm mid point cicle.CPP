#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void mca(int xc, int yc, int r)
{
int x=0;
int y=r;
int p=3-2*r;
void plotpoints(int,int,int,int);
plotpoints(xc,yc,x,y);
while(x<y)
{
x=x+1;
if(p<0)
{p=p+(4*x)+6;
}
else
{
y=y-1;
p=p+4*(x-y)+10;
}
plotpoints(xc,yc,x,y);
}
}
void plotpoints(int xc,int yc,int x, int y)
{
putpixel(xc+x,yc+y,1);
putpixel(xc-x,yc+y,1);
putpixel(xc+x,yc-y,1);
putpixel(xc-x,yc-y,1);
putpixel(xc+y,yc+x,1);
putpixel(xc-y,yc+x,1);
putpixel(xc+y,yc-x,1);
putpixel(xc-y,yc-x,1);
}
void main()
{
int xc,yc,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("enter the xc,yc and r value\n");
scanf("%d%d%d",&xc,&yc,&r);
printf("circle is shown below\n");
mca(xc,yc,r);
outtextxy(200,200,"Hardika");
getch();
}

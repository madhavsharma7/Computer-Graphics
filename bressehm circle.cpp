#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bca(int xc,int yc, int r)
{
int x=0;
int y=r;
int p=3-2*r;
void plotpoints(int,int,int,int);
plotpoints(xc,yc,x,y);
while(x<=y)
{
if(p<0)
{
p=p+(4*x)+6;
x=x+1;
}
else
{
p=p+4*(x-y)+10;
y=y-1;
}
x=x+1;
plotpoints(xc,yc,x,y);
}
}
void plotpoints(int xc,int yc,int x,int y)
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
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
printf("Enter the value of xc , yc and r\n");
scanf("%d%d%d",&xc,&yc,&r);
printf("The circle is shown below :");
bca(xc,yc,r);
getch();
closegraph();
}

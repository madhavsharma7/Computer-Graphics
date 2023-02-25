#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm=DETECT;
int i,x,y,r,cr,a;
initgraph (&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the coordinate of circle x,y and radius=");
scanf("%d%d%d",&x,&y,&r);
circle(x,y,r);
printf("Enter the number of circle=\n");
scanf("%d",&a);
printf("Enter the radius of changing circle =\n");
scanf("%d",&cr);
outtextxy(50,100,"MADHAV SHARMA");
for(i=1;i<=a;i++)
{
r=r+cr;
circle(x,y,r);
delay(10);
}
getch();
closegraph();
}
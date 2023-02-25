#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gmode=DETECT,gdriver=DETECT,i;
initgraph(&gmode,&gdriver,"C:\\TURBOC3\\BGI");

for(i=0;i<700;i++)
{
cleardevice();
line(10,375,800,375);
circle(100+i,205,30);
line(50+i,290,80+i,230);
line(70+i,250,120+i,270);
line(10+i,280,70+i,250);
line(20+i,370,50+i,290);
line(100+i,370,50+i,290);
line(150+i,370,130+i,280);
circle(130+i,275,7);

delay(15);
}

getch();
closegraph();
}

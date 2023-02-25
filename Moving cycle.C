#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode=DETECT;
int i=0;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
for(i=0;i<300;i++)
{
cleardevice();
line(50,300,600,300);
circle(110+i,260,40);
circle(260+i,260,40);
line(150+i,260,220+i,260);
line(150+i,260,180+i,200);
line (220+i, 260,250+i,200);//slant line2
line (180+1,200,250+i,200);//center line2
line (300+i,260,250+i,200);//handle line1
line (250+i, 200, 210+i, 160);//handle line
line (210+i, 160, 200+i, 160);//handle
line (180+i, 200, 180+i, 190); //seat linel
line (170+i, 190, 190+i, 190); //seat line 2
delay(10);
}
getch();
closegraph();
}


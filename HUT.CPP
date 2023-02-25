#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");

line(100,150,100,350);
line(100,150,200,50);
line(100,350,3500,350);
line(100,150,700,150);
line(200,50,300,150);
line(200,50,550,50);
line(550,50,670,180);
line(300,350,300,150);
line(635,350,635,150); //last line
line(150,250,150,350); //door left
line(250,250,250,350); //door right
line(150,250,250,250); //door top

outtextxy(20,20,"Hardika");

getch();
closegraph();
}


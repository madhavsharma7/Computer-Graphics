#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");

line(100,50,150,50);
line(100,50,150,100);
line(150,50,150,100);

getch();
closegraph();
}





#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

setfillstyle(XHATCH_FILL,RED);
circle(50,100,50);
floodfill(51,100,WHITE);
setfillstyle(SOLID_FILL,BLUE);
circle(100,200,50);
floodfill(100,200,WHITE);
setfillstyle(HATCH_FILL,GREEN);
circle(200,100,50);
floodfill(201,100,WHITE);
outtextxy(50,20,"MADHAV SHARMA");
getch();
closegraph();
}

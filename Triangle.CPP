#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");

setbkcolor(CYAN);
setcolor(RED);

line(100,50,250,50);
line(100,50,250,200);
line(250,50,250,200);

floodfill(100,100,RED);
getch();
closegraph();
}





#include<conio.h>
#include<graphics.h>
#include<math.h>
int x1,y1,x2,y2,x3,y3,x4,y4,mx,my;
void main()
{
int gd=DETECT,gm,c,mx,my;
float x,y,a1,a2,a3,a4,b1,b2,b3,b4;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the 1st point for the square:");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd point for the square:");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd point for the square:");
scanf("%d%d",&x3,&y3);
printf("Enter the 4rd point for the square:");
scanf("%d%d",&x4,&y4);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
printf("Enter the scalling coordinates");
scanf("%f%f",&x,&y);
outtextxy(50,180,"MADHAV SHARMA");
setcolor(BLUE);
mx=(x1+x2+x3+x4)/4;
my=(y1+y2+y3+y4)/4;
a1=mx+(x1-mx)*x;
b1=my+(y1-my)*y;
a2=mx+(x2-mx)*x;
b2=my+(y2-my)*y;
a3=mx+(x3-mx)*x;
b3=my+(y3-my)*y;
a4=mx+(x4-mx)*x;
b4=my+(y4-my)*y;
line(a1,b1,a2,b2);
line(a2,b2,a3,b3);
line(a3,b3,a4,b4);
line(a4,b4,a1,b1);
getch();
}

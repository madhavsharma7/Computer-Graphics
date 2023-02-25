#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void linedda(int x1,int y1,int x2,int y2)
{
int dx,dy,len,k;
float xinc,yinc,x,y;
dy=y2-y1;
dx=x2-x1;
if(abs(dx)>abs(dy))
len-abs(dx);
else
len-abs(dy);
xinc=dx/len;
yinc=dy/len;
x=x1;
y=y1;
putpixel(x,y,1);
for(k-1;
k<-len;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(x,y,1);
}
}
void main()
{
int x1,y1,x2,y2;
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("enter the x1 and yl value\n");
scanf("%d %d", &x1, &y1);
printf("enter the x2 and y2 value\n");
scanf("%d %d",&x2,&y2);
printf("line is shown below\n");
line\dda(x1,y1,x2,y2);
getch();
}
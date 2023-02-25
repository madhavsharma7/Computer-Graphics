#include<stdio.h>
#include<conio.h> 
#include<graphics.h> 
void mca(int xc,int yc,int r)
{
int x=0;
int y=r 
int p=1-r
void plotpoints(int, int, int, int); 
plotpoints(xc,yc,x,y);
while(x<y)
{
x=x+1;
if(p<0)
p=p+2*x+1;
else
{
	y=y-1;
	p=p+2*(x-y)+1;
}
plotpoints(xc,yc,x,y);
}	
putpixel(xc+x,yc+y,1); 
putpixel(xc-x,yc+y,1);
putpixel(xc+x,yc-y,1); 
putpixel(xc-x,yc-y,1): 
putpixel(xc+y,yc+x,1); 
putpixel(xc-y,yc+x,1): 
putpixel(xc+y,yc-x,1); 
putpixel(xc-y,yc-x,1);	
}
void main()
{
int xc,yc,r;
int gdriver=DETECT,gmode=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI"); 
printf("enter the xe.ye and r value\n"); 
scanf("%d %d %d",&xc,&yc,&r); 
printf("circle is shown below\n"); 
mca(xc,yc,r); 
getch();
}

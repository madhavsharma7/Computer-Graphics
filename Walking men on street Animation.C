
+




#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void build()
{
setbkcolor(BLUE);
line(10,200,600,200);
//building1
line(10,50,120,50);
line(10,50,10,200);
line(120,50,120,200);
line(50,100,50,200);
line(50,100,90,100);
line(90,100,90,200);
setfillstyle(SOLID_FILL,RED);
floodfill(11,51,WHITE);
//building2
setfillstyle(SOLID_FILL,RED);
line(200,100,200,200);
line(200,100,280,100);
line(280,100,280,200);
line(220,120,220,200);
line(220,120,260,120);
line(260,120,260,200);
floodfill(201,101,WHITE);
//hut
line(300,120,300,200);
line(300,120,350,70);
line(300,120,500,120);
line(320,150,350,150);
line(350,150,350,200);
line(320,150,320,200);
line(502,200,502,120);
line(400,200,400,120);   //
line(350,70,480,70);
line(350,70,400,120); //\
line(480,70,502,120);
setfillstyle(SOLID_FILL,RED);
floodfill(301,121,WHITE); //DOOR
floodfill(401,71,WHITE);  //SIDE PART
floodfill(350,71,WHITE);  //TRI
//pole
line(150,20,150,200);
line(170,20,170,200);
line(150,20,170,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(151,21,WHITE);
//pole
line(550,10,550,200);
line(570,10,570,200);
line(570,10,450,10);
line(570,20,450,20);
line(450,20,450,10);
setfillstyle(SOLID_FILL,WHITE);
floodfill(551,11,WHITE);
floodfill(451,11,WHITE);
floodfill(551,21,WHITE);
//lamp
setfillstyle(SOLID_FILL,BROWN);
circle(460,30,10);
floodfill(461,30,WHITE);
outtextxy(200,50,"YEAH RAINING");
}
void main()
{
int gdriver=DETECT,gmode=DETECT,i,j,x,y;
initgraph(&gdriver,&gdriver,"C:\\TURBOC3\\BGI");
for(i=0;i<500;i++)
{
build();
//men1
circle(50+i,240,20);
line(50+i,300,50+i,260);
//arms
line(50+i,260,10+i,280);
line(50+i,260,80+i,280);
//legs
line(50+i,300,10+i,340);
line(50+i,300,80+i,340);
//men2
circle(200+i,250,20);
line(200+i,310,200+i,270);
//arms
line(200+i,270,220+i,300);
line(200+i,270,182+i,300);
//legs
line(200+i,310,240+i,350);
line(200+i,310,150+i,350);
//men3
circle(350+i,290,20);
line(350+i,350,350+i,310);
//arms
line(350+i,320,390+i,300);
line(350+i,320,310+i,355);
//legs
line(350+i,350,310+i,380);
line(350+i,350,400+i,380);
//stick
line(390+i,310,390+i,250);
line(440+i,250,350+i,250);
arc(395+i,275,30,150,50);
//men4
circle(480+i,270,20);
line(480+i,290,480+i,350);
//arms
line(480+i,300,440+i,340);
line(480+i,300,520+i,330);
//legs
line(480+i,350,450+i,410);
line(480+i,350,520+i,410);
//men5
circle(350+i,290,20);
line(350+i,350,350+i,310);
//arms
line(350+i,320,390+i,300);
line(350+i,320,310+i,355);
//legs
line(350+i,350,310+i,380);
line(350+i,350,400+i,380);
x=getmaxx();
y=getmaxy();
for(j=0;j<700;j++)
{
outtextxy(random(x),random(y),"!");
}
delay(10);
cleardevice();
}
getch();
closegraph();
}



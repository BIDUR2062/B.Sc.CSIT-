#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void boundaryFill4(int x,int y,int fillColor,int boundaryColor);

int main()
{
int gd=DETECT,gm;
int x,y,r;

initgraph(&gd,&gm,"");

printf("Enter center (x y): ");
scanf("%d %d",&x,&y);

printf("Enter radius: ");
scanf("%d",&r);

setcolor(WHITE);
circle(x,y,r);

boundaryFill4(x,y,GREEN,WHITE);

getch();
closegraph();

return 0;
}

void boundaryFill4(int x,int y,int fillColor,int boundaryColor)
{
int current=getpixel(x,y);

if(current!=boundaryColor&&current!=fillColor)
{
putpixel(x,y,fillColor);
delay(5);

boundaryFill4(x+1,y,fillColor,boundaryColor);
boundaryFill4(x-1,y,fillColor,boundaryColor);
boundaryFill4(x,y+1,fillColor,boundaryColor);
boundaryFill4(x,y-1,fillColor,boundaryColor);
}
}
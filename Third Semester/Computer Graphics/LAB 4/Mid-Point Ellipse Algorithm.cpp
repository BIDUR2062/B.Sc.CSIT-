#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void plotEllipsePoints(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
}

void drawEllipse(int xc,int yc,int rx,int ry)
{
long rx2=(long)rx*rx;
long ry2=(long)ry*ry;

long twoRx2=2*rx2;
long twoRy2=2*ry2;

long x=0;
long y=ry;

long px=0;
long py=twoRx2*y;

long p1=ry2-(rx2*ry)+(rx2/4);

plotEllipsePoints(xc,yc,x,y);

while(px<py)
{
x++;
px+=twoRy2;

if(p1<0)
{
p1+=ry2+px;
}
else
{
y--;
py-=twoRx2;
p1+=ry2+px-py;
}

plotEllipsePoints(xc,yc,x,y);
delay(20);
}

long p2=(ry2*(x+0.5)*(x+0.5))+(rx2*(y-1)*(y-1))-(rx2*ry2);

while(y>0)
{
y--;
py-=twoRx2;

if(p2>0)
{
p2+=rx2-py;
}
else
{
x++;
px+=twoRy2;
p2+=rx2-py+px;
}

plotEllipsePoints(xc,yc,x,y);
delay(20);
}
}
int main()
{
int gd=DETECT,gm;
int xc,yc,rx,ry;
initgraph(&gd,&gm,"");
printf("Enter center Xc: ");
scanf("%d",&xc);
printf("Enter center Yc: ");
scanf("%d",&yc);
printf("Enter Rx: ");
scanf("%d",&rx);
printf("Enter Ry: ");
scanf("%d",&ry);
if(rx<=0||ry<=0)
{
printf("Radii must be positive!\n");
return 1;
}
drawEllipse(xc,yc,rx,ry);
getch();
closegraph();
return 0;
}
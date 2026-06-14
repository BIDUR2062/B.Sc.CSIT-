//rotation about z axis

#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14159
void rotatePoint(int x, int y, float cx, float cy, float angle, int *xr, int *yr)
{
    float rad = angle * PI / 180.0;

    *xr = (int)(cx + (x - cx)*cos(rad) - (y - cy)*sin(rad));
    *yr = (int)(cy + (x - cx)*sin(rad) + (y - cy)*cos(rad));
}
void drawSimpleCuboid(int x, int y, int l, int b, int h)
{
    rectangle(x,y,x+l,y+b);
    rectangle(x+h,y-h,x+l+h,y+b-h);

    line(x,y,x+h,y-h);
    line(x+l,y,x+l+h,y-h);
    line(x,y+b,x+h,y+b-h);
    line(x+l,y+b,x+l+h,y+b-h);
}
void drawRotatedCuboid(int x, int y, int l, int b, int h, float angle)
{
    int X[8],Y[8],RX[8],RY[8];
    X[0]=x;     Y[0]=y;
    X[1]=x+l;   Y[1]=y;
    X[2]=x+l;   Y[2]=y+b;
    X[3]=x;     Y[3]=y+b;

    X[4]=x+h;     Y[4]=y-h;
    X[5]=x+l+h;   Y[5]=y-h;
    X[6]=x+l+h;   Y[6]=y+b-h;
    X[7]=x+h;     Y[7]=y+b-h;

    float cx = x + l/2.0 + h/2.0;
    float cy = y + b/2.0 - h/2.0;

    for(int i=0;i<8;i++)
        rotatePoint(X[i],Y[i],cx,cy,angle,&RX[i],&RY[i]);

    line(RX[0],RY[0],RX[1],RY[1]);
    line(RX[1],RY[1],RX[2],RY[2]);
    line(RX[2],RY[2],RX[3],RY[3]);
    line(RX[3],RY[3],RX[0],RY[0]);

    line(RX[4],RY[4],RX[5],RY[5]);
    line(RX[5],RY[5],RX[6],RY[6]);
    line(RX[6],RY[6],RX[7],RY[7]);
    line(RX[7],RY[7],RX[4],RY[4]);

    line(RX[0],RY[0],RX[4],RY[4]);
    line(RX[1],RY[1],RX[5],RY[5]);
    line(RX[2],RY[2],RX[6],RY[6]);
    line(RX[3],RY[3],RX[7],RY[7]);
}
int main()
{
    float angle;
    int l = 120, b = 80, h = 40;
    initwindow(900,600,"Cuboid Rotation");
    setcolor(WHITE);
    drawSimpleCuboid(150,300,l,b,h);
    outtextxy(150,270,"Original Cuboid");
    printf("Enter rotation angle: ");
    scanf("%f",&angle);
    setcolor(WHITE);
    drawRotatedCuboid(500,300,l,b,h,angle);
    outtextxy(500,270,"Rotated Cuboid");
outtextxy(20,20,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

#include <graphics.h>
#include <conio.h>
#include <stdio.h>
void drawCuboid(int x[], int y[], int color)
{
    setcolor(color);
    for(int i=0;i<4;i++)
        line(x[i],y[i],x[(i+1)%4],y[(i+1)%4]);
    for(int i=4;i<8;i++)
        line(x[i],y[i],x[(i+1)%4+4],y[(i+1)%4+4]);
    for(int i=0;i<4;i++)
        line(x[i],y[i],x[i+4],y[i+4]);
}
int main()
{
    initwindow(1000,600,"3D Reflection about Z-axis");
    int x[8] = {200,300,300,200,240,340,340,240};
    int y[8] = {200,200,300,300,240,240,340,340};
    int h = 40; 
    int xr[8], yr[8];
    for(int i=0;i<8;i++){
        xr[i] = x[i];
        yr[i] = y[i];
    }
    int shiftX = 700;
    int shiftY = 50;
    for(int i=0;i<8;i++)
    {
        xr[i] = -x[i] + shiftX; 
        yr[i] = y[i] + shiftY;  
    }
    drawCuboid(x,y,WHITE);
    outtextxy(200,170,"Original Cuboid");
    drawCuboid(xr,yr,WHITE);
    outtextxy(350,200,"Reflected about Z-axis");
outtextxy(20,20,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

#include <graphics.h>
#include <conio.h>
#include<stdio.h>
int main()
{
   int gd = DETECT, gm;
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 200;
    int sx, sy;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    outtextxy(100, 80, "Original Object");
printf("Enter the scaling factor of x: ");
scanf("%d",&sx);
printf("Enter the scaling factor of y: ");
scanf("%d",&sy);
x1=x1*sx;
x2=x2*sx;
y1=y1*sy;
y2=y2*sy;
 setcolor(RED);
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 20, "scaled object");
    outtextxy(40,40,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

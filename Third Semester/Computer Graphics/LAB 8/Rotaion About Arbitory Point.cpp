#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    float hx, hy, theta;
    float x1r, y1r, x2r, y2r, x3r, y3r;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the coordinates of triangle: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the rotation point (hx hy): ");
    scanf("%f %f", &hx, &hy);
    printf("Enter angle of rotation in degrees: ");
    scanf("%f", &theta);
    theta = theta * 3.14159 / 180;
    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1r = hx + (x1 - hx) * cos(theta) - (y1 - hy) * sin(theta);
    y1r = hy + (x1 - hx) * sin(theta) + (y1 - hy) * cos(theta);
    x2r = hx + (x2 - hx) * cos(theta) - (y2 - hy) * sin(theta);
    y2r = hy + (x2 - hx) * sin(theta) + (y2 - hy) * cos(theta);
    x3r = hx + (x3 - hx) * cos(theta) - (y3 - hy) * sin(theta);
    y3r = hy + (x3 - hx) * sin(theta) + (y3 - hy) * cos(theta);
    setcolor(WHITE);
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);
    outtextxy(30,30,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    int xwmin, ywmin, xwmax, ywmax;
    int xvmin, yvmin, xvmax, yvmax;
    int x1, y1, rx, ry;
    float sx, sy, tx, ty;
    float xv, yv, rxv, ryv;
    printf("Enter xwmin ywmin: ");
    scanf("%d %d", &xwmin, &ywmin);
    printf("Enter xwmax ywmax: ");
    scanf("%d %d", &xwmax, &ywmax);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    rectangle(xwmin, ywmin, xwmax, ywmax);
    printf("Enter ellipse center (x y) and radii (rx ry): ");
    scanf("%d %d %d %d", &x1, &y1, &rx, &ry);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x1, y1, rx, ry);
    printf("Enter xvmin yvmin: ");
    scanf("%d %d", &xvmin, &yvmin);
    printf("Enter xvmax yvmax: ");
    scanf("%d %d", &xvmax, &yvmax);
    setcolor(RED);
    rectangle(xvmin, yvmin, xvmax, yvmax);
    sx = (float)(xvmax - xvmin) / (xwmax - xwmin);
    sy = (float)(yvmax - yvmin) / (ywmax - ywmin);
    tx = xvmin - sx * xwmin;
    ty = yvmin - sy * ywmin;
    xv = sx * x1 + tx;
    yv = sy * y1 + ty;
    rxv = rx * sx;
    ryv = ry * sy;
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(xv, yv, rxv, ryv);
    outtextxy(20, 20, "BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

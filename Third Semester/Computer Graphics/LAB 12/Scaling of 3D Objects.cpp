#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int maxx, maxy, midx, midy;
void drawAxis() {
    cleardevice();
    line(midx, 0, midx, maxy);      
    line(0, midy, maxx, midy);     
}
int main() {
    int sx, sy, sz; 
    int gd = DETECT, gm;

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "");

    maxx = getmaxx();
    maxy = getmaxy();
    midx = maxx / 2;
    midy = maxy / 2;
    drawAxis();
    bar3d(midx + 50, midy - 100, midx + 60, midy - 90, 5, 1);
    printf("Enter scaling factors (X Y Z): ");
    scanf("%d %d %d", &sx, &sy, &sz);
    printf("After scaling...\n");
    bar3d(midx + (sx * 50), midy - (sy * 100),midx + (sx * 60), midy - (sy * 90),5 * sz, 1);
    outtextxy(20, 20, "BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

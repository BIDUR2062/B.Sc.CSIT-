#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int maxx, maxy, midx, midy;
void drawAxis() {
    cleardevice();
    line(midx, 0, midx, maxy);      
    line(0, midy, maxx, midy);      
}
int main() {
    int tx, ty; 
    int gd = DETECT, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "");
    maxx = getmaxx();
    maxy = getmaxy();
    midx = maxx / 2;
    midy = maxy / 2;
    drawAxis();
    bar3d(midx + 50, midy - 100, midx + 60, midy - 90, 10, 1);
    printf("Enter translation factors (X Y): ");
    scanf("%d %d", &tx, &ty);
    printf("After translation: \n");
    bar3d(midx + 50 + tx, midy - 100 - ty, midx + 60 + tx, midy - 90 - ty, 10, 1);
    outtextxy(20,20,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

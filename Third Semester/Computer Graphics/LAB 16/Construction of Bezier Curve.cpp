#include <graphics.h>
#include <stdio.h>
#include <math.h>
void drawBezier(int P[4][2]) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    outtextxy(20, 20, "BIDUR KHANAL");
    double t;
    int x, y;
    for(t = 0.0; t <= 1.0; t += 0.001) {
        double u = 1 - t;
        x = round(u*u*u*P[0][0] + 3*u*u*t*P[1][0] + 3*u*t*t*P[2][0] + t*t*t*P[3][0]);
        y = round(u*u*u*P[0][1] + 3*u*u*t*P[1][1] + 3*u*t*t*P[2][1] + t*t*t*P[3][1]);
        putpixel(x, y, WHITE);
    }
    setcolor(WHITE);
    for(int i = 0; i < 4; i++) {
        circle(P[i][0], P[i][1], 3);
        putpixel(P[i][0], P[i][1], WHITE);
    }
    getch();
    closegraph();
}
int main() {
    int P[4][2];
    printf("Enter 4 control points (x y) for Bezier curve:\n");
    for(int i = 0; i < 4; i++) {
        printf("P%d: ", i);
        scanf("%d %d", &P[i][0], &P[i][1]);
    }
    drawBezier(P);
    return 0;
}

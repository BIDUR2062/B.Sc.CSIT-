#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void plotCirclePoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}
void drawCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 1 - r;
    plotCirclePoints(xc, yc, x, y);
    while (x < y)
    {
        x++;
        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            y--;
            p = p + 2 * x - 2 * y + 1;
        }
        plotCirclePoints(xc, yc, x, y);
        delay(50);
    }
}
int main()
{
    int gd = DETECT, gm;
    int xc, yc, r;
    initgraph(&gd, &gm, "");
    printf("Enter center (x y): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius: ");
    scanf("%d", &r);
    if (r<=0)
    {
        printf("Radius must be positive!\n");
        return 1;
    }
    drawCircle(xc, yc, r);
    getch();
    closegraph();
    return 0;
}
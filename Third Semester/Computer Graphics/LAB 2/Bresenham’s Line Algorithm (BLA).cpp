#include <stdio.h>
#include <graphics.h>

// Function to draw a line using Bresenham's Line Algorithm
// Assumption: 0 <= slope(m) <= 1, x1 > x0
void drawline(int x0, int y0, int x1, int y1) {

    int dx = x1 - x0;              // ?x
    int dy = y1 - y0;              // ?y
    int p  = 2 * dy - dx;          // Initial decision parameter P0

    int x = x0;
    int y = y0;

    putpixel(x, y, RED);

    while (x < x1) {
        x = x + 1;                 // Always increment x for |m| <= 1

        if (p >= 0) {
            y = y + 1;             // Increment y
            p = p + 2 * dy - 2 * dx;   // Pk+1 = Pk + 2?y - 2?x
        } else {
            p = p + 2 * dy;            // Pk+1 = Pk + 2?y
        }

        putpixel(x, y, RED);     // Plot the pixel
    }
}

int main() {

    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");

    int x0, y0, x1, y1;

    printf("Enter coordinates of first point (x0 y0): ");
    scanf("%d %d", &x0, &y0);

    printf("Enter coordinates of second point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    // Validity check for algorithm conditions
    if (x1 <= x0 || y1 < y0 || (y1 - y0) > (x1 - x0)) {
        printf("\nWarning: This program only works correctly for:\n");
        printf(" - x1 > x0\n");
        printf(" - y1 >= y0\n");
        printf(" - (y1 - y0) <= (x1 - x0)  [i.e., slope 0 <= m <= 1]\n");
        printf("Proceeding anyway...\n\n");
    }

    drawline(x0, y0, x1, y1);

    getch();
    closegraph();

    return 0;
}


#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void flood8(int x, int y, int fill, int old);

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

  
    setcolor(RED);
    line(50, 50, 250, 50);  

    setcolor(GREEN);
    line(250, 50, 250, 250); 

    setcolor(BLUE);
    line(250, 250, 50, 250); 

    setcolor(YELLOW);
    line(50, 250, 50, 50);   

    flood8(55, 55, CYAN, BLACK);

    printf("Bidur Khanal");

    getch();
    closegraph();
    return 0;
}

void flood8(int x, int y, int fill, int old) {
    if (getpixel(x, y) == old) {
        putpixel(x, y, fill);
        delay(0);

        flood8(x + 1, y, fill, old);
        flood8(x - 1, y, fill, old);
        flood8(x, y + 1, fill, old);
        flood8(x, y - 1, fill, old);

        flood8(x + 1, y + 1, fill, old);
        flood8(x - 1, y - 1, fill, old);
        flood8(x + 1, y - 1, fill, old);
        flood8(x - 1, y + 1, fill, old);
    }
}

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 200;
    int tx, ty;

    initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");

 
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    outtextxy(100, 80, "Original Object");

 
    printf("Enter translation factor tx: ");
    scanf("%d", &tx);
    printf("Enter translation factor ty: ");
    scanf("%d", &ty);

   
    x1 = x1 + tx;
    y1 = y1 + ty;
    x2 = x2 + tx;
    y2 = y2 + ty;

   
    setcolor(RED);
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 20, "Translated Object");
    setcolor(BLUE);
    outtextxy(20,20,"BIDUR KHANAL");

    getch();
    closegraph();
    return 0;
}
//
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
   int x0, y0, x1, y1;
   float delx, dely, len;
   float x, y;
   int i;


   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");


   printf("DDA Line Drawing with Animation\n");
   printf("Enter start (x0 y0): ");
   scanf("%d %d", &x0, &y0);
   printf("Enter end (x1 y1): ");
   scanf("%d %d", &x1, &y1);


   delx = x1 - x0;
   dely = y1 - y0;


   len = (abs(delx) > abs(dely)) ? abs(delx) : abs(dely);
   if (len == 0) {
           len = 1;
   }


   delx /= len;
   dely /= len;


   x = x0;
   y = y0;


   for (i = 0; i <= (int)len; i++) {
       putpixel((int)round(x), (int)round(y), BLUE);
       x += delx;
       y += dely;
       delay(10);
   }


   getch();
   closegraph();
   return 0;
}

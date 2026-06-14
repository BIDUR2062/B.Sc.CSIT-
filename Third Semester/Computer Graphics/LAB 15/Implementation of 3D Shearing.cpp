#include <graphics.h> 
#include <conio.h> 
#include <stdio.h> 
void drawCuboid(int x[], int y[], int color) { 
setcolor(color); 
for(int i=0;i<4;i++) line(x[i],y[i],x[(i+1)%4],y[(i+1)%4]); 
for(int i=4;i<8;i++) line(x[i],y[i],x[(i+1)%4+4],y[(i+1)%4+4]);
 for(int i=0;i<4;i++) line(x[i],y[i],x[i+4],y[i+4]); } 
 int main() 
 { initwindow(1000,600,"3D X-axis Shearing of Cuboid");
  int x[8] = {200,300,300,200,240,340,340,240}; 
  int y[8] = {200,200,300,300,240,240,340,340}; 
  int h = 40; int xs[8], ys[8]; 
  for(int i=0;i<8;i++){ 
  xs[i] = x[i]; ys[i] = y[i]; 
  } 
  float shXY, shXZ; 
  printf("Enter X-shear factor due to Y (shXY): "); 
  scanf("%f",&shXY); 
  printf("Enter X-shear factor due to Z (shXZ): "); 
  scanf("%f",&shXZ); 
  int cy = 0; 
  for(int i=0;i<8;i++)
   cy += y[i]; cy /= 8; 
   int shiftX = 400; 
   int shiftY = 50; 
   for(int i=0;i<8;i++) 
   { if(i<4) { xs[i] = x[i] + shXY*(y[i]-cy) + shiftX; ys[i] = y[i] + shiftY; } 
   else { xs[i] = x[i] + shXY*(y[i]-cy) + shXZ*h + shiftX; ys[i] = y[i] + shiftY; } } 
   drawCuboid(x,y,WHITE); 
   outtextxy(200,170,"Original Cuboid"); 
   drawCuboid(xs,ys,WHITE); 
   outtextxy(650,170,"3D X-Sheared Cuboid"); 
   outtextxy(20,20,"BIDUR KHANAL"); 
   getch();
    closegraph(); 
	return 0; 
	}
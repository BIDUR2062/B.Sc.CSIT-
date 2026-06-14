#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int computeCode(int x, int y,int xwmin,int ywmin,int xwmax,int ywmax) {
    int code = 0;
    if(y < ywmin) code |= 8;
    if(y > ywmax) code |= 4;
    if(x > xwmax) code |= 2;
    if(x < xwmin) code |= 1;
    return code;
}
void printBinary(int code) {
    for(int i=3;i>=0;i--) printf("%d",(code>>i)&1);
}
int main() {
    int gd=DETECT, gm;
    int xwmin,ywmin,xwmax,ywmax;
    printf("Enter xwmin ywmin: ");
    scanf("%d%d",&xwmin,&ywmin);
    printf("Enter xwmax ywmax: ");
    scanf("%d%d",&xwmax,&ywmax);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(RED);
    rectangle(xwmin,ywmin,xwmax,ywmax);
    rectangle(xwmin+300,ywmin,xwmax+300,ywmax);
    int x1,y1,x2,y2;
    printf("Enter starting point of the line: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter ending point of the line: ");
    scanf("%d%d",&x2,&y2);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    int cx1=x1, cy1=y1, cx2=x2, cy2=y2;
    while(1) {
        int r1=computeCode(cx1,cy1,xwmin,ywmin,xwmax,ywmax);
        int r2=computeCode(cx2,cy2,xwmin,ywmin,xwmax,ywmax);
        if((r1|r2)==0) {
            setcolor(GREEN);
            line(cx1+300,cy1,cx2+300,cy2);
            break;
        } else if((r1 & r2)!=0) {
            break;
        } else {
            int outCode=(r1!=0)? r1:r2;
            float x,y;
            if(outCode & 8) { y=ywmin; x=cx1 + (float)(cx2-cx1)*(ywmin-cy1)/(cy2-cy1);}
            else if(outCode & 4) { y=ywmax; x=cx1 + (float)(cx2-cx1)*(ywmax-cy1)/(cy2-cy1);}
            else if(outCode & 2) { x=xwmax; y=cy1 + (float)(cy2-cy1)*(xwmax-cx1)/(cx2-cx1);}
            else if(outCode & 1) { x=xwmin; y=cy1 + (float)(cy2-cy1)*(xwmin-cx1)/(cx2-cx1);}
            if(outCode==r1){ cx1=(int)x; cy1=(int)y;}
            else { cx2=(int)x; cy2=(int)y;}
        }
    }
setcolor(RED);
outtextxy(50,50,"BIDUR KHANAL");
    getch();
    closegraph();
    return 0;
}

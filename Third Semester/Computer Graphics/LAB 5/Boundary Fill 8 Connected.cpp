 #include  <stdio.h> 
 #include  <conio.h> 
 #include  <graphics.h> 
 void  boundaryFill8  (  int  x  ,  int  y  ,  int  fillColor  ,  int  boundaryColor  ); 
 int  main  () { 
 int  gd  =  DETECT, gm; 
 initgraph  (  &  gd,  &  gm,  ""  ); 
 setcolor  (WHITE); 
 rectangle  (  100  ,  100  ,  300  ,  250  ); 
 boundaryFill8  (  150  ,  150  , BLUE, WHITE); 
 getch  (); 
  closegraph  (); 
 return  0  ; 
 } 
 void  boundaryFill8  (  int  x  ,  int  y  ,  int  fillColor  ,  int  boundaryColor  ) { 
 int  current  =  getpixel  (x, y); 
 if  (current  !=  boundaryColor  &&  current  !=  fillColor)  { 
 putpixel  (x, y, fillColor); 
 delay  (  5  ); 
 boundaryFill8  (x  +  1  , y, fillColor, boundaryColor); 
 boundaryFill8  (x  -  1  , y, fillColor, boundaryColor); 
 boundaryFill8  (x, y  +  1  , fillColor, boundaryColor); 
 boundaryFill8  (x, y  -  1  , fillColor, boundaryColor); 
 boundaryFill8  (x  +  1  , y  +  1  , fillColor, boundaryColor); 
 boundaryFill8  (x  -  1  , y  -  1  , fillColor, boundaryColor); 
 boundaryFill8  (x  +  1  , y  -  1  , fillColor, boundaryColor); 
 boundaryFill8  (x  -  1  , y  +  1  , fillColor, boundaryColor); 
 } 
 }
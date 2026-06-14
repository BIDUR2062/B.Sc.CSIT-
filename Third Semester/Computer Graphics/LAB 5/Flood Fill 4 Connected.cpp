 #include  <stdio.h> 
 #include  <conio.h> 
 #include  <graphics.h> 
 void  flood  (  int  x  ,  int  y  ,  int  fill  ,  int  old  ); 
 int  main  () { 
 int  gd  =  DETECT, gm; 
 initgraph  (  &  gd,  &  gm,  ""  ); 
 setcolor  (WHITE); 
 rectangle  (  50  ,  50  ,  250  ,  250  ); 
 flood  (  55  ,  55  , BLUE, BLACK); 
 getch  (); 
 closegraph  (); 
                                                    
 return  0  ; 
 } 
 void  flood  (  int  x  ,  int  y  ,  int  fill  ,  int  old  ) { 
 if  (  getpixel  (x, y)  ==  old) { 
 putpixel  (x, y, fill); 
 delay  (  20 ); 
 flood  (x  +  1  , y, fill, old); 
 flood  (x  -  1  , y, fill, old); 
 flood  (x, y  +  1  , fill, old); 
 flood  (x, y  -  1  , fill, old); 
 } 
 } 
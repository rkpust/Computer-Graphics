#include<dos.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
# include <unistd.h>
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
   float x=1,y=0.00000,j=.5,count=.1;
   float r=15;

   setcolor(14);
   line(0,215,650,215);
    sleep(1);
    
    
    for(int k=0;k<=7;k++)
     {

      for(float i=90;i<270;i+=10)
       {
y=cos(((i*22/7)/180))/j;

if(y>0)
y=-y;
x+=5;
setcolor(RED);
setfillstyle(1,RED);
circle(x,y*100+200,r);
floodfill(x,y*100+200,RED);

       delay(100);

setcolor(0);
setfillstyle(1,0);
circle(x,y*100+200,r);
floodfill(x,y*100+200,0);

       }

      j+=count;
      count+=.1;

     }
     
   getch();
}
#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
float r,x,y,x0,y0,pk,xc,yc,tx,ty,sh,xn1,yn1,r1;
int i;

cout<<"Enter the value of radius: ";
cin>>r;
cout<<"Enter the value of center point (xc,yc): ";
cin>>xc>>yc;
cout<<"Enter shearing value (0-1): ";
cin>>sh;

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)" ");
 
//Original Circle
setcolor(RED);
circle(xc,yc,r);

//shearing circle X-axis
setcolor(GREEN);
circle((xc+sh*yc),yc,r);
//shearing circle Y-axis
setcolor(BLUE);
circle(xc,(yc+sh*xc),r);
//shearing circle XY-axis
setcolor(YELLOW);
circle((xc+sh*yc),(yc+sh*xc),r);

//xn1=xc+sh*yc;
//yn1=yc;
//r1=r+sh*xc;
//ellipse(xn1,yn1,0,360,r,r1);

getch();
closegraph();
}
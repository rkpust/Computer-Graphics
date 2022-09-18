#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawing_line(float x1, float y1, float x2, float y2, int color)
{
    float dx, dy, steps,x_inc, y_inc;

    dx= x2-x1;
    dy= y2-y1;

    if(abs(dx)>abs(dy))
    steps = abs(dx);
    else
    steps= abs(dy);

    x_inc= dx/steps;
    y_inc= dy/steps;
    int i=1;
    
    do
    {
        putpixel(x1,y1,color);
        x1+= x_inc;
        y1+= y_inc;
    } while (i++<=steps);  
}

int main()
{
float x,y,x2,y2,x1,y1,sx,sy;
int i;

cout<<"Enter 1st point (x0,y0): ";
cin>>x1>>y1;
cout<<"Enter 2nd point (x1,y1): ";
cin>>x2>>y2;
cout<<"Enter scaling factor (sx,sy): ";
cin>>sx>>sy;

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)" ");

// Before Scalling line Indicate by Green 
drawing_line(x1,y1,x2,y2,GREEN);

// Scalling line 
x1=x1*sx;
y1=y1*sy;
x2=x2*sx;
y2=y2*sy;

// After Scalling line Indicate by RED 
drawing_line(x1,y1,x2,y2,RED);

getch();
closegraph();
return 0;
}
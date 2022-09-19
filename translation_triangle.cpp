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
    float x1, y1, x2,y2,x3,y3,tx,ty;
    cout<<"Enter 1st point(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter 2nd point(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter 3rd point(x3, y3): ";
    cin>>x2>>y2;
    cout<<"Translation Factor(tx, ty): ";
    cin>>tx>>ty;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");
   
    // Original Triangle Indicate Green
    drawing_line(x1,y1,x2,y2,GREEN); 
    drawing_line(x1,y1,x3,y3,GREEN);
    drawing_line(x2,y2,x3,y3,GREEN);  

    // Translation
    x1+= tx;
    x2+= tx;
    x3+= tx;
    y1+=ty;
    y2+=ty;
    y3+=ty;

    // Translation Triangle Indicate RED
    drawing_line(x1,y1,x2,y2,RED); 
    drawing_line(x1,y1,x3,y3,RED);
    drawing_line(x2,y2,x3,y3,RED);    
    
    getch();
    closegraph();
    return 0;
}
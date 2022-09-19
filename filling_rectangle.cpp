#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawing_rectangle(float x1, float y1, float x2, float y2)
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
        putpixel(x1,y1,4);
        x1+= x_inc;
        y1+= y_inc;
    } while (i++<=steps);
    
}

int main()
{
    float x1, y1, x2,y2;
    cout<<"Enter 1st point(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter end point(x2, y2): ";
    cin>>x2>>y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    setfillstyle(HATCH_FILL,GREEN); 
    drawing_rectangle(x1,y1,x2,y1); 
    drawing_rectangle(x1,y1,x1,y2); 
    drawing_rectangle(x1,y2,x2,y2);  
    drawing_rectangle(x2,y1,x2,y2);
    //rectangle(x1,y1,x2,y2);
    floodfill(x1+1,y1+1,RED);
    
    getch();
    closegraph();
    return 0;
}
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
    float x1,y1,x2,y2,x3,y3;  
    double s,c, theta,pi=3.14159;  
    
    cout<<"Enter 1st point (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter 2nd point (x2,y2): ";
    cin>>x2>>y2;
    cout<<"Enter 3rd point (x3,y3): ";
    cin>>x3>>y3;
    cout<<"Enter Rotation Angle(a): ";
    cin>>theta;

    int gd=DETECT,gm;
    initgraph(&gd, &gm, (char*)" ");  
     
    drawing_line(x1,y1,x2,y2,GREEN);  
    drawing_line(x2,y2, x3,y3,GREEN);  
    drawing_line(x3, y3, x1, y1,GREEN);  
   
    c = cos(theta *pi/180);  
    s = sin(theta *pi/180);  
    
    x1 = abs(floor(x1 * c + y1 * s));  
    y1 = abs(floor(-x1 * s + y1 * c));  
    x2 = abs(floor(x2 * c + y2 * s));  
    y2 = abs(floor(-x2 * s + y2 * c));  
    x3 = abs(floor(x3 * c + y3 * s));  
    y3 = abs(floor(-x3 * s + y3 * c));  
     
    drawing_line(x1,y1,x2,y2,RED);  
    drawing_line(x2,y2, x3,y3,RED);  
    drawing_line(x3, y3, x1, y1,RED);    
    
    getch();  
    closegraph();
    return 0;
}
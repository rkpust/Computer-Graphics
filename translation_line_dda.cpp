#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    float x1, x2, y1, y2, tx, ty;
    cout<<"Enter 1st point(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Point (x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Translation Factor( tx, ty): ";
    cin>>tx>>ty;

    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*)" ");

    int dx, dy, steps;
    dx = x2-x1;
    dy= y2-y1;
    steps = (abs(dx)>abs(dy)?abs(dx):abs(dy));
    
    float x_inc, y_inc;
    x_inc = dx/steps;
    y_inc =dy/steps;

    //Before Translation Indicate GREEN line
    // After Translation Indicate RED Line
    for(int i=0;i<(int)steps; i++){
        putpixel((int)(x1), (int)(y1), GREEN);
        putpixel((int)(x1+tx), (int)(y1+ty), RED);
        x1+=round(x_inc);
        y1+=round(y_inc);
    }

    getch();
    closegraph();
    return 0;
}
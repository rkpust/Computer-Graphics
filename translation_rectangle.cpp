#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawing_rectangle(float x1, float y1, float x2, float y2, int str)
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
        putpixel((int)x1,(int)y1,str);
        x1+= round(x_inc);
        y1+= round(y_inc);
        
    } while (i++<=steps);
    
}


int main()
{
    int x1, y1, x2,y2,tx,ty;

    cout<<"Enter 1st point(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter end point(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Translation Factor (tx,ty): ";
    cin>>tx>>ty;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");
     
    // Original Ractangle Indicate with GREEN
    drawing_rectangle(x1,y1,x2,y1,GREEN); 
    drawing_rectangle(x1,y1,x1,y2,GREEN); 
    drawing_rectangle(x1,y2,x2,y2,GREEN);  
    drawing_rectangle(x2,y1,x2,y2,GREEN);


    // Translation Ractangle Indicate with RED
    drawing_rectangle(x1+tx,y1+ty,x2+tx,y1+ty,RED); 
    drawing_rectangle(x1+tx,y1+ty,x1+tx,y2+ty,RED); 
    drawing_rectangle(x1+tx,y2+ty,x2+tx,y2+ty,RED);  
    drawing_rectangle(x2+tx,y1+ty,x2+tx,y2+ty,RED);
    
    getch();
    closegraph();
    return 0;
}
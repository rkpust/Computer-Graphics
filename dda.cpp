#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{
   
    float x1, x2, y1,y2,dx,dy,x_inc, y_inc,steps;

    cout<<"Enter 1st point (x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd Point(x2,y2) "<<endl;
    cin>>x2>>y2;

    dx= x2-x1;
    dy= y1-y2;

    if(abs(dx)>dy) 
	steps = abs(dx);
    else 
	steps= abs(dy);

    x_inc= dx/steps;
    y_inc= dy/steps;
	
    int i=1;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");
    do
    {
        putpixel((int)x1,(int)y1,GREEN);
        x1+= round(x_inc);
        y1+= round(y_inc);
    } while (i++<=steps);
    
    getch();
    closegraph();
    return 0;
}
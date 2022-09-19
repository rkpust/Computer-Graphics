#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    float r,x,y,x0,y0,pk,xc,yc,sx,sy;
    int i;

    cout<<"Enter Redius: ";
    cin>>r;
    cout<<"Enter center of Circle(xc,yc): ";
    cin>>xc>>yc;
    cout<<"Enter Scalling factor (sx): ";
    cin>>sx;
    
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");

    setbkcolor(WHITE);
    //Original circle Indicate with Red 
    setcolor(RED);
    circle(xc,yc,r);

    //Scalling circle Indicate BY Green
    setcolor(GREEN);
    circle(xc,yc,r*sx);

    getch();
    closegraph();
}
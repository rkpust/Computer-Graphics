#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{

    float r,x,y,x0,y0,pk,xc,yc,tx,ty;
    int i;

    cout<<"Enter Redius: ";
    cin>>r;
    cout<<"Enter center of Circle(xc,yc): ";
    cin>>xc>>yc;
    cout<<"Enter translation factor (tx,ty): ";
    cin>>tx>>ty;
    
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");
    setbkcolor(WHITE);
    //Original circle Indicate with Red 
    setcolor(RED);
    circle(xc,yc,r);

    //translated circle Indicate BY Green
    setcolor(GREEN);
    circle(xc+tx,yc+ty,r);

    getch();
    closegraph();
}
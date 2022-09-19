#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, tx, ty;
    cout<<"Enter 1st point(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Point (x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Translation Factor( tx, ty): ";
    cin>>tx>>ty;

    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*)" ");

    //Before Translation Indicate GREEN line
    setcolor(GREEN);
    line(x1,y1,x2,y2);

    x1+=tx;
    x2+= tx;
    y1+=ty;
    y2+=ty;
    
    // After Translation Indicate RED Line
    setcolor(RED);
    line(x1,y1,x2,y2);

    getch();
    closegraph();
    return 0;
}
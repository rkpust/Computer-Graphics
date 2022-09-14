#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2,dx,dy,p0;
    cout<<"Enter 1st Point (x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd Point (x2,y2)"<<endl;
    cin>>x2>>y2;

    dx= x2-x1;
    dy= y2-y1;
    p0= 2*dy- dx;

    int gd= DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    do
    {
        putpixel(x1,y1,RED);
        
        if(p0<0)
            {
                p0= p0+ 2*dy;        
            }
        else
            {
               y1++;
               p0= p0+ 2*dy-2*dx; 
            }
        x1++;
      // cout<<x1<<" "<<y1<<endl;
    }while(x1<=x2);
  
    getch();
    closegraph();
    return 0;
}
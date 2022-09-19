#include<bits/stdc++.h>
#include<graphics.h>

using namespace std; 
int main()
{
    int xc,yc, redius, x, y,sx;

    cout<<"Enter center of Circle(xc,yc): ";
    cin>>xc>>yc;
    cout<<"Enter Redius of Circle : ";
    cin>>redius;
    cout<<"Enter Scalling Factor(sx): ";
    cin>>sx;

    x=0;
    y = redius;
    int p = 1-redius;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    do{
        //Original Circle Indicate BY Various color
        putpixel (xc + x, yc + y,RED); 
        putpixel (xc - x, yc + y,BLUE); 
        putpixel (xc + x, yc - y,GREEN); 
        putpixel (xc - x, yc - y,WHITE); 
        putpixel (xc + y, yc + x,YELLOW); 
        putpixel (xc - y, yc + x,BLUE); 
        putpixel (xc + y, yc - x,RED); 
        putpixel (xc - y, yc - x,GREEN);

        // Scalling Circle Indicates Yollow Circle
        putpixel (xc + x*sx, yc + y*sx,YELLOW); 
        putpixel (xc - x*sx, yc + y*sx,YELLOW); 
        putpixel (xc + x*sx, yc - y*sx,YELLOW); 
        putpixel (xc - x*sx, yc - y*sx,YELLOW); 
        putpixel (xc + y*sx, yc + x*sx,YELLOW); 
        putpixel (xc - y*sx, yc + x*sx,YELLOW); 
        putpixel (xc + y*sx, yc - x*sx,YELLOW); 
        putpixel (xc - y*sx, yc - x*sx,YELLOW);
      
      if(p<0)
        {
            p+= 2*x-1;
        }
      else
        {
           y--;
           p+= 2*(x-y)+1;
        }
        x++;
    }while(x<y);

    getch();
    closegraph();
    return 0;
}
#include<bits/stdc++.h>
#include<graphics.h>

using namespace std; 
int main()
{
    int xc,yc, redius, x, y;

    cout<<"Enter center of Circle(xc,yc): ";
    cin>>xc>>yc;
    cout<<"Enter Redius of Circle : ";
    cin>>redius;
    int tx, ty;
    cout<<"Enter Translation Factor(tx, ty): ";
    cin>>tx>>ty;

    x=0;
    y = redius;
    int p = 1-redius;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");
    do{
        //Original Circle
        putpixel(xc + x, yc + y,RED); 
        putpixel (xc - x, yc + y,BLUE); 
        putpixel (xc + x, yc - y,GREEN); 
        putpixel (xc - x, yc - y,WHITE); 
        putpixel (xc + y, yc + x,YELLOW); 
        putpixel (xc - y, yc + x,BLUE); 
        putpixel (xc + y, yc - x,RED); 
        putpixel (xc - y, yc - x,GREEN);

        // Translation Circle Indicates Yollow Circle
        putpixel(xc + x+tx, yc + y+ty,YELLOW); 
        putpixel (xc - x+tx, yc + y+ty,YELLOW); 
        putpixel (xc + x+tx, yc - y+ty,YELLOW); 
        putpixel (xc - x+tx, yc - y+ty,YELLOW); 
        putpixel (xc + y+tx, yc + x+ty,YELLOW); 
        putpixel (xc - y+tx, yc + x+ty,YELLOW); 
        putpixel (xc + y+tx, yc - x+ty,YELLOW); 
        putpixel (xc - y+tx, yc - x+ty,YELLOW);
      
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
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    float x, y, x0, y0, x1, y1, sh;
    int i;

    cout << "Enter 1st point (x0,y0): ";
    cin >> x0 >> y0;
    cout << "Enter 2nd point (x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter shearing factor (sh): ";
    cin >> sh;

    // line before translation
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");

    setcolor(2);
    line(x0, y0, x1, y1);

    // calculating the coordinates
    x0 = x0 + y0 * sh;
    y0 = y0;
    x1 = x1 + y1 * sh;
    y1 = y1;

    setcolor(3);
    line(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void drawing_rectangle(float x1, float y1, float x2, float y2, int str)
{
    float dx, dy, steps, x_inc, y_inc;

    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    x_inc = dx / steps;
    y_inc = dy / steps;
    int i = 1;

    do
    {
        putpixel((int)x1, (int)y1, str);
        x1 += round(x_inc);
        y1 += round(y_inc);

    } while (i++ <= steps);
}

int main()
{

    float r, x, y, x0, y0, pk, xc, yc, tx, ty;
    int i;
    double angle, radian;

    cout << "Enter redius: ";
    cin >> r;
    cout << "Enter center point (xc,yc): ";
    cin >> xc >> yc;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)" ");

    drawing_rectangle(xc + 80, 1, xc + 80, 500, RED);
    drawing_rectangle(1, yc + 80, 500, yc + 80, RED);
    // radian=angle*3.14/180;
    // simple circle
    setcolor(RED);
    circle(xc, yc, r);

    // reflection about x-axis circle
    setcolor(GREEN);
    circle(xc + 2 * 80, yc, r);
    // reflection about y-axis circle
    setcolor(BLUE);
    circle(xc, yc + 2 * 80, r);
    // reflection about xy-axis circle
    setcolor(WHITE);
    circle(xc + 2 * 80, yc + 2 * 80, r);
    getch();
    closegraph();
}
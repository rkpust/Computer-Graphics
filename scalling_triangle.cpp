 /*
   | s1 0|
 s=| 0 s2|
 p = |0|
     |0|
 p' = s*p;
 */
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawing_line(float x1, float y1, float x2, float y2, int color)
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
        putpixel(x1,y1,color);
        x1+= x_inc;
        y1+= y_inc;
    } while (i++<=steps);
    
}
 
void findNewCoordinate(int s[][2], int p[][1])
{
	p[0][0]= p[0][0]*s[0][0];
	p[1][0]=p[1][0]*s[1][1];
}

void scale(int x[], int y[], int sx, int sy)
{
	// Triangle before Scaling Indicate GREEN
	drawing_line(x[0], y[0], x[1], y[1],GREEN);
	drawing_line(x[1], y[1], x[2], y[2],GREEN);
	drawing_line(x[2], y[2], x[0], y[0],GREEN);

	int s[2][2] = { sx, 0, 0, sy };
	int p[2][1];

	for (int i = 0; i < 3; i++)
	{
		p[0][0] = x[i];
		p[1][0] = y[i];

		findNewCoordinate(s, p);

		x[i] = p[0][0];
		y[i] = p[1][0];
	}

	// Triangle after Scaling  Indicate RED
	drawing_line(x[0], y[0], x[1], y[1],RED);
	drawing_line(x[1], y[1], x[2], y[2],RED);
	drawing_line(x[2], y[2], x[0], y[0],RED);
}

 
int main()
{
	int x[] = { 100, 200, 300 };
	int y[] = { 200, 100, 200 };
	int sx = 2, sy = 2;

	int gd=DETECT, gm; 
	initgraph(&gd, &gm,(char*)" ");

	scale(x, y, sx,sy);

	getch();
	closegraph();
	return 0;
}
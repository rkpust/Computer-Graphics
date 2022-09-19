#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
main()
{
   int xc,yc,r;

   cout<<"Enter Center of Circle (xc,yc): ";
   cin>>xc>>yc;
   cout<<"Enter Radius of Circle (r): ";
   cin>>r;

   int gd = DETECT, gm;
   initgraph(&gd, &gm,(char*)" ");

   setcolor(GREEN);
   setfillstyle(LTSLASH_FILL, RED); 
   circle(xc,yc,r);
   floodfill(xc,yc,GREEN);
   
   getch();
   closegraph();
   return 0;

   /*
   PATTERN              INT VALUES
-------------------------------
EMPTY_FILL               0
SOLID_FILL               1
LINE_FILL                2
LTSLASH_FILL             3   
SLASH_FILL               4
BKSLASH_FILL             5
LTBKSLASH_FILL           6 
HATCH_FILL               7 
XHATCH_FILL              8
INTERLEAVE_FILL          9
WIDE_DOT_FILL           10
CLOSE_DOT_FILL          11
USER_FILL               12
   */


  /*
  COLOR               INT VALUES
-------------------------------
BLACK                   0
BLUE                    1
GREEN                   2
CYAN                    3   
RED                     4
MAGENTA                 5
BROWN                   6 
LIGHTGRAY               7 
DARKGRAY                8
LIGHTBLUE               9
LIGHTGREEN             10
LIGHTCYAN              11
LIGHTRED               12
LIGHTMAGENTA           13
YELLOW                 14
WHITE                  15
  */
}
#include <bits/stdc++.h>
#include <time.h>
#include <graphics.h>
 
int main()
{
	
	long current_time;
    char timeStr[256];
    
    int midx, midy;
    int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)" ");
	
 /* mid pixel in horizontal and vertical axis */
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    while (!kbhit()) {
        cleardevice();
        setcolor(WHITE);
        setfillstyle(XHATCH_FILL,BLUE);
	    rectangle(midx - 250, midy - 40, midx + 250, midy + 40);
        floodfill(midx,midy,WHITE);
        
        
        //setfillstyle(LTSLASH_FILL, BROWN);
        // Clock inner Outline
	    //rectangle((midx - 250)+5, (midy - 40)+5,(midx + 250)-5, (midy + 40)-5);
        //floodfill(midx, midy, BROWN);
        /* Get Current epoch time in seconds */
       current_time = time(NULL);
        /* store the date and time in string */
        strcpy(timeStr, ctime(&current_time));
        setcolor(RED);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
 
        moveto(midx, midy+10);
        /* print current time */
         outtext(timeStr);
        /* Add delay of 1000 milliseconds(1 second) */
        delay(1000);
    }

	// Hold the screen for a while
	getch();

	// Close the initialized gdriver
	closegraph();
}
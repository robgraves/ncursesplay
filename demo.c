
//demo.c
//Something something dark side...

#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main()
{
    int x = 0;
    int y = 0;

    initscr();              //Initialize the window
    noecho();               //Don't echo any keypresses
    curs_set(FALSE);        //Don't display a cursor

    while(1)
    {
        clear();            //clear screen of previously printed characters
        mvprintw(y,x, "o"); //Print our "ball" at the current xy position
        refresh();

        usleep(DELAY);      //Shorter delay between movements
        x++;                //Advance the ball to the right   
    }

    endwin();               //Restore normal terminal behavior
}

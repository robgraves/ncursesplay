//demo.c


#include <ncurses.h>
#include <unistd.h>

int main()
{

    initscr();          //Initialize the window
    noecho();           //Don't echo any keypresses
    curs_set(FALSE);    //Don't Display a cursor   

    mvprintw(0,0, "Hello, World!");
    refresh();

    sleep(1);

    endwin();   //Restore normal terminal behavior
}

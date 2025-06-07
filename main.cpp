#include <defs.h>
#include <iostream>

int main(void)
{
	initscr();
	noecho();
	raw();
	printw("This isn't ncurses screen");
	getch();

	endwin();
	return 0;
}
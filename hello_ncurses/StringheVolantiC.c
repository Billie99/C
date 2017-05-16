/* StringheVolantiC.c */

#include <ncurses.h>
#include <time.h>

int main()
{
 initscr();
 curs_set(0);

 struct timespec tempo;

 tempo.tv_sec = 0;
 tempo.tv_nsec = 700 * 1000* 1000;

 mvaddstr(15, 4, "Ciao sono un ncurses\n");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "Benvenuto in questo corso\n");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(5, 4, "Arriverderci\n");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(20, 25, "Premi un tasto per uscire \n");
 refresh();

 getch();
 endwin();

 return 0;
}

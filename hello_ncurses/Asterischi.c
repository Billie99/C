/* Asterischi.c */

#include <ncurses.h>
#include <time.h>

int main()
{
 initscr();
 curs_set(0);

 struct timespec tempo;

 tempo.tv_sec = 0;
 tempo.tv_nsec = 700 * 1000 * 1000;

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10 ,20, " ");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10 ,20, " ");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10 ,20, " ");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);

  mvaddstr(10 ,20, " ");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10 ,20, " ");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10, 20, "*");
 refresh();
 nanosleep(&tempo, NULL);


 mvaddstr(30, 20, "Premi un tasto per uscire\n");
 refresh();

 getch();
 endwin();

 return 0;
}

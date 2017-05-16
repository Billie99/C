
#include <ncurses.h>

int main()
{
  /* inizializza la modalita' semigrafica */
  initscr();

  /* rende il cursore invisibile */
  curs_set(0);

  /* stampa sullo schermo */
  printw("Hello, Ncurses\n");
  printw("Premi un tasto per uscire\n");

  move(13, 5);
  addstr("Nuova stringa alla posizione 14, 5\n");

  /* sposta e stampa */
  mvaddstr(10, 20, "Nuova stringa\n");

  /* copia lo schermo virtuale su quello fisico */
  refresh();

  /* per evitare che il programma termini attende un tasto */
  getch();

  /* ripristina il terminale allo stato iniziale */
  endwin();

  return 0;
}

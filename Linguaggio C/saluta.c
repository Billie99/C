/* saluta.c */
#include <stdio.h>

int main()
{
 /* inizializziamo il contatore a 0 */
 int i = 0;

 while(i < 3)
{
/* stampa di un saluto */
 puts("Ciao, While");

 /* aggiornamento del contatore */
 i++;
}
 printf("Il numero di ripetizioni e': %d\n", i);

 return 0;
}

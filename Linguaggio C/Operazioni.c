#include <stdio.h>

/* Le quattro operazioni elementari */


 /* Per eseguire questo programma digitare da terminale
   gcc -c Operazioni.c -o Operazioni.o
   gcc Operazioni.o -o Operazioni */

int main()
{
 int numero1;
 int numero2;

 printf("Inserisci il valore del primo numero\n");
 scanf("%d", &numero1);

 printf("Inserisci il valore del secondo numero\n");
 scanf("%d", &numero2);

 printf("La somma e': %d\n",numero1 + numero2);
 printf("La differenza e': %d\n",numero1 - numero2);
 printf("Il prodotto e': %d\n",numero1 * numero2);
 printf("Il quoziente e': %d\n", numero1 / numero2);
 printf("Il resto e' : %d\n", numero1 % numero2);
 return 0;

}

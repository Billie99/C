#include <stdio.h>

/* Le quattro operazioni elementari */


 /* Per eseguire questo programma digitare da terminale
   gcc -c Operazioni.c -o Operazioni.o
   gcc Operazioni.o -o Operazioni */

int main()
{
 int numero;
 int numero1;

 printf("Inserisci il valore del primo numero\n");
 scanf("%d", &numero);

 printf("Inserisci il valore del secondo numero\n");
 scanf("%d", &numero1);

 printf("La somma e': %d\n",numero + numero1);
 printf("La differenza e': %d\n",numero - numero1);
 printf("Il prodotto e': %d\n",numero * numero1);
 printf("Il quoziente e': %d\n", numero / numero1);

 return 0;

}

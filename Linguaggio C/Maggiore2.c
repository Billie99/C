#include <stdio.h>

/*Calcola il maggiore di 2 numeri */

/* Per compilare il codice eseguire gcc -c Maggiore2.c -o
   Maggiore2.o
gcc Maggiore2.o -o Maggiore2 */

int main()
{
/* Dichiarazione di variabili */
 int a;
 int b;

/* funzione di stampa a video */ 
printf("Inserisci il valore di a\n");
/* funzione che prende in input un intero */
scanf("%d", &a);

printf("Inserisci il valore di b\n");
scanf("%d", &b);

/* condizione seletttiva */

if(a == b)
{
 printf("I due numeri risultano uguali\n");
}

else if(a > b)
{
 printf("Il maggiore e' : %d\n", a);
}

/* Condizione verificata se le due condizioni precedenti non sono state 
   verificate */

else
{
 printf("Il maggiore e' %d\n", b);
}

return 0;

}


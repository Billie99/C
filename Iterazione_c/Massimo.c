/* Massimo.c */

#include <stdio.h>

int main()
{
 // inizializzazione delle variabili

 int number = 0;
 int count = 0;
 int temp = 0;
 int max = 0;

 temp = number;

 while ( count <  11 )
{

 printf("Inserisci un numero ");
 scanf("%d", &number);

 if ( number > temp ) { max = number; }

 count = count + 1;

}

 printf("Il numero massimo e': %d\n", max);

 return 0;
}

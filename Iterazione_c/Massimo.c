/* Massimo.c */

#include <stdio.h>

int main()
{
 // inizializzazione delle variabili
 int numero = 0;
 int conta = 0;
 int temp = 0;
 int massimo = 0;

 temp = numero;

 while ( conta <  11 )
{

 printf("Inserisci un numero ");
 scanf("%d", &numero);

 conta = conta + 1;

 if ( numero > temp ) { massimo = numero; }

}

printf("Il numero e': %d\n", massimo);

 return 0;
}

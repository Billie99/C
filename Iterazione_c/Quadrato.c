#include <stdio.h>

int main()
{

 int numero;
 int conta;
 int passi = 0;
 int carattere;

 printf("Disegna carattere con ");
 scanf("%c", &carattere);

 do {


 printf("Inserisci il lato (min 1, max 20) ");
 scanf("%d", &numero);


 if ( numero < 1 || numero > 20 )
 {

 printf("Valore fuori dai limiti! \n");

 }

 printf("\n");

 } while ( numero < 1 || numero > 20 );



 while ( passi < numero )
 {

 conta = 0;

 while ( conta < numero )
 {

 printf("%c", carattere);
 conta = conta + 1;

 }

 printf("\n");
 passi = passi + 1;

 }

 return 0;

 }

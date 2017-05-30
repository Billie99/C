#include <stdio.h>

int main()
{
 int conta = 0;
 int righe = 0;
 int carattere;
 int numero;
 int line = 0;
 int cols;

 printf("Disegna un quadrato con ");
 scanf("%c", &carattere);
 printf("\n");

 do {

 printf("Inserisci il lato (min 1, max 20): ");
 scanf("%d", &numero);

 if ( numero < 1 || numero > 20 )
 {

 printf("Valore fuori dai limiti! \n");

 }

 } while ( numero < 1 || numero > 20 );


 /* prima riga */

  conta = 0;

  while ( conta < numero )
 {

  printf("%c", carattere);

  conta = conta + 1;

 }



 printf("\n");

 righe = 0;

 while ( righe < ( numero - 2 ) )
 {

  printf("%c", carattere);


  cols = 1;

 while ( cols < ( numero - 1 ) )
 {

  putchar(' ');

  cols = cols + 1;

 }

 printf("%c", carattere);

 righe = righe + 1;
 putchar('\n');

 }

 /* ultima riga */
 while ( line < numero )
 {

 printf("%c", carattere);
 line = line + 1;

 }

 putchar('\n');

 return 0;
 }

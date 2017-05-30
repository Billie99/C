#include <stdio.h>

int main()
{

 int numero;
 int colonna;
 int righe;

 int carattere;

 printf("Disegna con ");
 scanf("%c", &carattere);


 do {

 printf("Inserisci il numero del lato ");
 scanf("%d", &numero);


 if ( numero < 1 || numero > 20 )
 {

 printf("Valore fuori dai limiti ");

 }

 } while ( numero < 1 || numero > 20 );


 putchar('\n');
 colonna = 0;

 while ( colonna < numero )

 {

 righe = 0;

 while ( righe < ( numero - colonna ) )

 {

   righe = righe + 1 ;

   putchar(carattere);

 }

  putchar('\n');

  colonna = colonna + 1;

 }

 return 0;
}

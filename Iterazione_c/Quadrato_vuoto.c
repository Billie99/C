#include <stdio.h>

int main()
{
 int conta = 0;
 int passi = 0;
 char carattere;
 int numero;
 int line = 0;
 int cols;

 printf("Disegna un quadrato con ");
 scanf("%c", &carattere);
 printf("\n");

 printf("Inserisci il lato (min 1, max 20): ");
 scanf("%d", &numero);

 if ( numero < 1 || numero > 20 )
{
 printf("Valore fuori dai limiti! \n");
 return 0;
}

 while ( conta < numero )
{
 printf("%c", carattere);

 conta = conta + 1;

}

 printf("\n");

 passi = 0;
 while ( passi < numero )
{

 printf("%c", carattere);


 cols = 1;
 while ( cols < ( numero - 1 ) )
{

 printf(" ");
 cols = cols + 1;

}

 printf("%c", carattere);
 passi = passi + 1;
 printf("\n");

}

 while ( line < numero )
{

 printf("%c", carattere);
 line = line + 1;

}

 printf("\n");

 return 0;
}

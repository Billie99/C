#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main()
{

 int numero;
 int binario = TRUE;
 int somma = 0;
 int decimale;
 int bit;
 int potenza;
 int i;

 do {

 printf("Inserisci un numero binario di 8 bit >> ");
 scanf("%d", &numero);

 decimale = numero;

  //verifica se un numero e' binario
   while ( numero > 0 )
   {
         bit = numero % 10;
         numero = numero / 10;

	 if ( bit != 1 || bit != 0 )
         {
	    binario = FALSE;
 	 }
   }

 //verifica se e' negativo

 if ( numero < 0 )
 {
    printf("Non sono accettati i numeri negativi \n");
 }


 else if (binario == FALSE)
 {
   printf("Il numero non e' binario \n");
 }


 } while ( numero < 0 || binario == FALSE );



 i = 0;
 while ( i < 8 )
 {

   bit = decimale % 10;

   if ( bit == 1 )
   {
      potenza = pow(2.0, i);
      somma = somma + potenza;
   }

   decimale = decimale / 10;
   i = i + 1;

 }

 printf("Il valore in decimale e' -> %d \n", somma);

 return 0;
}

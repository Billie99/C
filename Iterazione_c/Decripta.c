#include <stdio.h>

int main()
{
  int numero;
  int cifra1, cifra2;
  int cifra3, cifra4;
  int diff1;
  int diff2;
  int diff3;
  int diff4;
  int temp;


  do {
	printf("Inserisci il numero criptato ");
	scanf("%d", &numero);

	if ( numero < 0 )
	{
	   printf("Non sono ammessi numeri negativi \n");
	}

	else if ( numero > 9999 )
	{
	   printf("Il numero deve essere di 4 cifre \n");
	}

 } while ( numero < 0 || numero > 9999 );


 diff4 = 0;
 // decifrazione della quarta cifra
 cifra4 = numero % 10;
 numero = numero / 10;
 diff4 = ( cifra4 +3 ) % 10;

 diff3 = 0;
 // decifrazione della terza cifra
 cifra3 = numero % 10;
 numero = numero / 10;
 diff3 = ( cifra3 + 3 ) % 10;

 diff2 = 0;
 // decifrazione della seconda cifra
 cifra2 = numero % 10;
 numero = numero / 10;
 diff2 = ( cifra2 + 3 ) % 10;

 diff1 = 0;
 // decifrazione della prima cifra
 cifra1 = numero % 10;
 numero = numero / 10;
 diff1 = ( cifra1 + 3 ) % 10;


 // primo scambio
 temp = diff1;
 diff1 = diff3;
 diff3 = temp;


 // secondo scambio
 temp = diff4;
 diff4 = diff2;
 diff2 = temp;

 printf("Il numero decifrato e': %d%d%d%d \n", diff1, diff2, diff3, diff4);

 return 0;
}

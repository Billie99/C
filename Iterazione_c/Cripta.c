#include <stdio.h>

int main()
{

  int numero;
  int conta;
  int cifra1, cifra2, cifra3, cifra4;
  int somma1 = 0, somma2 = 0;
  int somma3 = 0, somma4 = 0;
  int temp;

 do {
	printf("Inserisci un numero \n");
	scanf("%d", &numero);

	if ( numero < 0 )
	{
	   printf("Non sono ammessi numeri negativi \n");
	}

	else if ( numero > 9999 )
	{
	   printf("Il numero deve essere di quattro cifre \n");
	}

  } while ( numero < 0 || numero > 9999 );

 // prima cifratura
 cifra4 = numero % 10;
 numero = numero / 10;
 somma4 = ( cifra4 + 7 ) % 10;

 // seconda cifratura
 cifra3 = numero % 10;
 numero = numero / 10;
 somma3 = ( cifra3 + 7 ) %10;

 // terza cifratura
 cifra2 = numero % 10;
 numero = numero / 10;
 somma2 = ( cifra2 + 7) % 10;

 // quarta cifratura
 cifra1 = numero % 10;
 numero = numero / 10;
 somma1 = ( cifra1 + 7 ) % 10;


 // scambio
 temp = somma1;
 somma1 = somma3;
 somma3 = temp;

 temp = 0;

 // secondo scambio
 temp = somma2;
 somma2 = somma4;
 somma4 = temp;

 printf("Il numero criptato e': %d%d%d%d \n", somma1, somma2, somma3, somma4);

 return 0;
}

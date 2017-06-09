#include <stdio.h>

#define True 1
#define False 0


int main()
{

  int numero;
  int conta;
  int cifra1;
  int cifra2;
  int cifra3;
  int cifra4;
  int cifra5;
  int verita;

 do {
	printf("Inserisci il numero ");
 	scanf("%d", &numero);

	if ( numero < 0 )
	{
	   printf("Non sono ammessi i numeri negativi \n");
	}

	else if ( numero > 99999 )
	{
	   printf("Inserire solo numeri di 5 cifre \n");
	}


 } while ( numero < 0 || numero > 99999 );

 // estrazione della prima cifra
 cifra1 = numero % 10;
 numero = numero / 10;

 // estrazione della seconda cifra
 cifra2 = numero % 10;
 numero = numero / 10;

 // estrazione terza cifra
 cifra3 = numero % 10;
 numero = numero / 10;

 // estrazione quarta cifra
 cifra4 = numero % 10;
 numero = numero / 10;

 // estrazione quinta cifra
 cifra5 = numero % 10;
 numero = numero / 10;

 // Verifica se e' palindromo
 if ( cifra5 == cifra1 && cifra4 == cifra2 )
 {
    verita = True;
 }

 else
 {
   verita = False;
 }


 if (verita)
 {
    printf("Il numero inserito e' palindromo \n");
 }

 else
 {
    printf("Il numero non e' palindromo \n");
 }

 return 0;
}

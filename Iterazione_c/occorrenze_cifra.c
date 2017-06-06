#include <stdio.h>

int main()
{
   int numero;
   int conteggio;
   int conta;

 do {
      printf("Inserisci un numero >> ");
      scanf("%d", &numero);

      if ( numero < 0 )
      {
         printf("Non e' ammesso usare numeri negativi \n");
      }

    } while ( numero < 0 );


 conta = 0;
 while ( numero > 0 )
 {
    conteggio = numero % 10;

 if ( conteggio == 7 )
 {
    conta = conta + 1;
 }

    numero = numero / 10;

 }

 if ( conta == 1 )
 {
     printf("Nella cifra e' stato trovato %d sette \n", conta);
 }

 else
 {
    printf("Nella cifra sono stati trovati -> %d sette \n", conta);
 }


 return 0;
}

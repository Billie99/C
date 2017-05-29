/* Due_maggiori.c */

#include <stdio.h>

int main()
{

 int conta = 0;
 int numero;
 int massimo = 0;
 int minimo = 0;

 // input primo valore
 printf("Inserisci i numeri ");
 scanf("%d", &numero);

 massimo = numero;

 // input secondo valore
 printf("Inserisci i numeri ");
 scanf("%d", &numero);

 if ( numero > massimo )
{
 minimo = massimo; // si effettua una scalatura
 massimo = numero;
}

 else
{
 minimo = numero;
}

 while ( conta < 8 )
{
 printf("Inserisci i numeri ");
 scanf("%d", &numero);

 if ( numero > massimo ) { minimo = massimo;

      massimo = numero; }

 else if ( numero > minimo && numero < massimo ) { minimo = numero; }

 conta = conta + 1;

}

 printf("Il massimo1 e': %d\n", massimo);
 printf("Il massimo2 e': %d\n", minimo);

 return 0;
}

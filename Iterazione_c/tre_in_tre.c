/* 3_in_3.c */
#include <stdio.h>

int main()
{

 int numero = 0;
 int conta = 30;

 puts("Inserisci il numero di partenza");
 scanf("%d\n", &numero);

 printf("Numero di partenza: %d\n", numero);
 printf("\n");

 while( numero < conta )
{
 printf("%d\n", numero);

 numero = numero + 3;
}

 return 0;
}

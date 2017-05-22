/* Tabelline.c */

#include <stdio.h>

int main()
{

 int numero = 0;
 int j;
 int risultato = 0;

 while ( numero < 11 )
{
 j = 0;

 while ( j < 11 )
{

 risultato = numero * j;

 printf("%d\t", risultato);
 j = j + 1;
}

printf("\n");
numero = numero + 1;
}

 return 0;
}

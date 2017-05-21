/* 3_in_3.c */

#include <stdio.h>
#include <time.h>

int main()
{

 int numero = 0;
 int conta = 0;

 struct timespec tempo;

 tempo.tv_sec = 1; // 1 secondo
 tempo.tv_nsec = 0;

 printf("Inserisci il numero di partenza ");
 scanf("%d", &numero);

 printf("Inserisci il numero arrivo ");
 scanf("%d", &conta);

 printf("\n");

 printf("Numero di partenza: %d\n", numero);
 printf("\n");

 printf("Viaa!!\n");
 nanosleep( &tempo, NULL );

 while( numero <= conta )
{
 printf("%d\n", numero);

 nanosleep( &tempo, NULL );

 numero = numero + 3;
}

 return 0;
}

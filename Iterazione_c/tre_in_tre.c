/* 3_in_3.c */

#include <stdio.h>
#include <time.h>

int main()
{

 int numero = 0;
 int conta = 0;

 struct timespec tempo;

 tempo.tv_sec = 1.5; // 1 secondo
 tempo.tv_nsec = 0;

 printf("Inserisci il numero di partenza ");
 scanf("%d", &numero);

 printf("\n");

 printf("Numero di partenza: %d\n", numero);
 printf("\n");
 nanosleep( &tempo, NULL);

 printf("Viaa!!\n");
 nanosleep( &tempo, NULL );

 while( conta < 5 )
{
 printf("%d\n", numero);

 nanosleep( &tempo, NULL );
 conta = conta + 1;

 numero = numero + 3;
}

 return 0;
}

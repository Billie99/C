#include <stdio.h>

 /* Per eseguire questo programma digitare da terminale
   gcc -c Cerchio.c -o Cerchio.o
   gcc Cerchio.o -o Cerchio */


const float pi = 3.1415926;

int main()
{
 int Raggio;
 float Circonferenza;
 float Superficie;

 printf("Inserisci il valore del raggio\n");
 scanf("%d", &Raggio);

 Circonferenza = (2.0 * pi) * Raggio;

 printf("Il valore della circonferenza e': %f\n", Circonferenza);

 Superficie = pi * (Raggio * Raggio);

 printf("Il valore della superficie e': %f\n", Superficie);

 return 0;
}

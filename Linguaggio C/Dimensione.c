#include <stdio.h>
#include <limits.h>

 /* Per eseguire questo programma digitare da terminale
   gcc -c Dimensione.c -o Dimensione.o
   gcc Dimensione.o -o Dimensione */



int main()
{

 printf("La dimensione di una variabile int e': %d\n", sizeof(int));
 printf("La dimensione int massima e': %d\n", INT_MAX);
 printf("La dimensione int minima e': %d\n", INT_MIN);

 return 0;
}

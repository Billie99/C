#include <stdio.h>

int main()
{
   int numbers[3];
   int indice;
   int somma = 0;
   double media = 0;

   printf("Inserisci tre valori interi\n");

   for(indice = 0; indice < 3; indice ++)
   {
     printf("? ");
     scanf("%d", &numbers[indice]);
     somma = somma + numbers[indice];
   }
    printf("Dati iniziali: \n");

    printf("numbers[0] = %d\n", numbers[0]);
    printf("numbers[1] = %d\n", numbers[1]);
    printf("numbers[2] = %d\n", numbers[2]);

    printf("Somma: %d\n", somma);

    media = somma / indice;
    printf("Media: %f\n", media);
 
    return 0;
}

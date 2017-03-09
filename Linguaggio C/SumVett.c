#include <stdio.h>

int main()
{
  int numbers[3];
  int somma = 0;
  double media = 0;
  
  printf("Somma e Media\n");
  printf("\n");
  
  printf("Inserisci tre valori\n");
  printf("\n");
    
  printf("? ");
  scanf("%d", &numbers[0]);
  printf("? ");
  scanf("%d", &numbers[1]);
  printf("? ");
  scanf("%d", &numbers[2]);
  printf("\n");
 	
  printf("Dati iniziali:\n");
  
  printf("numbers[0] = %d\n", numbers[0]);
  printf("numbers[1] = %d\n", numbers[1]);
  printf("numbers[2] = %d\n", numbers[2]);
  printf("\n");
  
  somma = numbers[0] + numbers[1] + numbers[2];
  printf("Somma: %d\n", somma);
  
  media = somma / 3.0;
  printf("Media: %lf\n", media);
  
  return 0;
}

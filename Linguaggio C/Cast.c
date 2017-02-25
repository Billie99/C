#include <stdio.h>

int main()
{
  double numero1;

   printf("Inserisci un numero in virgola mobile\n");
   scanf("%lf", &numero1);

  int numero2 = (int)numero1;

  printf("Il numero in virgola mobile e': %lf\n", numero1);
  printf("Il numero convertito in intero e': %d\n", numero2);

  return 0;
}

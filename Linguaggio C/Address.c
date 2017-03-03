#include <stdio.h>

int main()
{
  float numero;
  float *p;

  printf("Inserisci un numero\n");
  scanf("%f", &numero);

  p = &numero;

  printf("Il valore della variabile e': %f\n", *p);
  printf("Il suo indirizzo e': %p\n", p);

  return 0;
}

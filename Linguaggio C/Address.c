#include <stdio.h>

int main()
{
  int numero;
  int *p;

  printf("Inserisci un numero\n");
  scanf("%d", &numero);

  p = &numero;

  printf("Il valore della variabile e': %d\n", *p);
  printf("Il suo indirizzo e': %p\n", p);

  return 0;
}

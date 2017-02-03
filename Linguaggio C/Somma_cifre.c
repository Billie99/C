#include <stdio.h>

int main()
{
 int numero;
 int somma = 0;

 printf("Inserisci un numero di 3 cifre\n");
 scanf("%d", &numero);

 if(numero < 100 || numero > 999)
{
 printf("Il numero che hai inserito non e' di 3 cifre\n");
 return 0;
}

else
{
 int c = numero % 10;
 numero = numero / 10;

 int b = numero % 10;
 numero = numero / 10;

 int a = numero % 10;
 somma = a + b + c;
}

 printf("La somma delle cifre che hain inserito e': %d\n", somma);

 return 0;

}

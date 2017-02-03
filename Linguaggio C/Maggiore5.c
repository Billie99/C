#include <stdio.h>

/* Programma che determina il massimo di 5 numeri */

int main()
{
/* Dichiarazione di variabili */
 int numero1;
 int numero2;
 int numero3;
 int numero4;
 int numero5;
 int massimo;
 
 printf("Inserisci un numero ");
 scanf("%d", &numero1);

 printf("Inserisci un numero ");
 scanf("%d", &numero2);

 printf("Inserisci un numero ");
 scanf("%d", &numero3);

 printf("Inserisci un numero ");
 scanf("%d", &numero4);

 printf("Inserisci un numero ");
 scanf("%d", &numero5);

 massimo = numero1;

 if(numero1 == numero2 && numero2 == numero3 && numero3 == numero4 && numero4 == numero5)
{
 printf("I numeri sono uguali\n");
 return 0; 
}
 else{
 /* Determinazione del massimo */

 if(numero2 > massimo){ massimo = numero2; }
 if(numero3 > massimo){ massimo = numero3; }
 if(numero4 > massimo){ massimo = numero4; }
 if(numero5 > massimo){ massimo = numero5; }
} 

 printf("Il massimo e': %d\n", massimo);

 return 0;

}

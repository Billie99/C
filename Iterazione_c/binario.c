#include <stdio.h>

int main()
{

 int numero;
 int somma = 0;
 int a, b, c;
 int d, e, f, g, h;

 do {

 printf("Inserisci un numero binario di 8 bit >> ");
 scanf("%d", &numero);

 if ( numero < 0 )
 {
    printf("Non sono accettati i numeri negativi \n");
 }

 } while ( numero < 0 );

 a = ( numero & ( 1 << 0 ));
 b = ( numero & ( 1 << 1 ));
 c = ( numero & ( 1 << 2 ));
 d = ( numero & ( 1 << 3 ));
 e = ( numero & ( 1 << 4 ));
 f = ( numero & ( 1 << 5 ));
 g = ( numero & ( 1 << 6 ));
 h = ( numero & ( 1 << 7 ));

 somma = a + b + c + d + e + f + g + h;

 printf("Il numero decimale e' %d\n", somma);

 return 0;
}

#include <stdio.h>

const float pi = 3.1315926;

int main()
{
 float raggio;
 float circonferenza;
 float superficie;

 do {


 printf("Inserisci il valore del raggio ");
 scanf("%f", &raggio);


 if ( raggio < 0 )
 {

  printf("Il raggio deve essere non negativo \n");

 }


 } while ( raggio < 0 );


 circonferenza = ( 2.0 * pi ) * raggio;
 printf("Il valore della circonferenza e': %f\n", circonferenza);

 superficie = pi * ( raggio * raggio );
 printf("Il valore della superficie e': %f\n", superficie);

 return 0;
}

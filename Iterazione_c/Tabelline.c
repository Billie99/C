/* Tabelline.c */

#include <stdio.h>

int main()
{

 int numero = 0;

 while ( numero < 11 )
{

 if ( numero == 1 ) { printf("%d\t", numero);
 	numero = numero + 1; }

 if ( numero == 2 ) { printf("%d\t", numero);
	numero = numero + 2; }

}

 return 0;
}

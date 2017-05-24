/* Tabellina.c */

#include <stdio.h>

int main()
{

 int i = 0;
 int j = 0;
 int result = 0;

 while ( i < 11 )
{

 j = 1;

 while ( j < 11 )
{

 result = i * j;
 printf("%d\t", result);

 j = j + 1;

}

 i = i + 1;
 printf("\n");

}

 return 0;
}

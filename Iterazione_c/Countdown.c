/* Countdown */
#include <stdio.h>

int main()
{

 int i = 0;

 puts("Inserisci un numero");
 scanf("%d\n", &i);

 while(i >= 0)
{

 printf("%d\n", i);
 i--;

}

return 0;
}

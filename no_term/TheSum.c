#include <stdio.h>
#include <time.h>

int main()
{

int num = 0;
int numero = 0;

while(1)
{

FILE *f = fopen("sum.dat", "r");

if (!f)
{
 printf("Impossibile aprire il file, il file non esiste \n");

 return 0;
}

printf("Lettura dal file sum.dat in corso ... \n");
fscanf(f, "%d", &numero);
fclose(f);
sleep(2);

printf("Valore corrente: %d\n", numero);
sleep(2);

printf("Inserisci il valore da sommare: ");
scanf("%d", &num);
sleep(2);

numero = numero + num;

printf("Il nuovo valore e': %d\n", numero);
sleep(2);
printf("Salvataggio nel file sum.dat in corso ...\n");
sleep(2);
printf("\n");

f = fopen("sum.dat", "w");
fprintf(f, "%d\n", numero);
fclose(f);

}
return 0;

}

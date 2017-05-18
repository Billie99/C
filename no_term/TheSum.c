#include <stdio.h>
#include <time.h>

int main()
{

struct timespec tempo;

tempo.tv_sec = 2;
tempo.tv_nsec = 0;

int num = 0;
int numero = 0;

FILE *f = fopen("sum.dat", "r");

if (!f)
{
 printf("Impossibile aprire il file, il file non esiste \n");
 nanosleep(&tempo, NULL);
 printf("Verra creato un nuovo file con il valore immesso dall' utente\n");
 nanosleep(&tempo, NULL);
}

else
{
 printf("Lettura dal file sum.dat in corso ... \n");
 fscanf(f, "%d", &numero);
 fclose(f);
 nanosleep(&tempo, NULL);
}

printf("Valore corrente: %d\n", numero);
nanosleep(&tempo, NULL);
printf("Inserisci il valore da sommare: ");
scanf("%d", &num);

numero = numero + num;

printf("Il nuovo valore e': %d\n", numero);
nanosleep(&tempo, NULL);
printf("Salvataggio nel file sum.dat in corso ...\n");

f = fopen("sum.dat", "w");
fprintf(f, "%d\n", numero);
fclose(f);

return 0;

}

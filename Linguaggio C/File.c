#include <stdio.h>

int main()
{
 int numero = 0; /* Inizializzazione della variabile */

 FILE *f = fopen("myfile.txt", "r"); /* Apre il file in lettura */

 fscanf(f, "%d", &numero); /* Legge il valore dal file */
 printf("Ho letto il numero %d\n", numero); /* Lo stampa sul terminale */

 fclose(f); /* chiude i file aperti */

 return 0;
}

#include <iostream>
#include <time.h>

/* Includiamo libreria time.h */

/* Questo programma calcola il tempo di esecuzione di un programma */

using namespace std;

int main()
{
 /* Dichiariamo le nostre variabili */
 int start;
 int end;

/* Assegniamo alle nostre variabili la funzione clock */
 start = clock();
 end = clock();

 /* Calcoliamo il tempo di clock per secondo */
 double tempo = (double)(end - start);

 cout << "Il tempo di esecuzione di un programma e': " << tempo << " " << "secondo " << endl;

 return 0;
}

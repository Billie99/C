#include <iostream>

/* Questo programma esegue l'algoritmo di Fibonacci */


using namespace std;

int main()
{

/* Inizzializziamo le nostre variabili */
 
 int n;
 int primo_numero = 0;
 int secondo_numero = 1;
 int somma;

 cout << "Inserisci il numero che vuoi trasformare \n";
 cin >> n;

/* Eseguiamo un ciclo for per contare un tot numero di volte */ 
 
 for(int i = 0; i < n; i++)
{
 if(i <= 1)
{
 somma = i;
}
 else
{
 /* Successione di numeri in cui ciascun numero e' la somma dei due precedenti */
  
 somma = primo_numero + secondo_numero;
 primo_numero = secondo_numero;
 secondo_numero = somma;
}
/* Stampa della successione */
  
 cout << somma << endl;

}

 return 0;
}

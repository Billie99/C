#include <iostream>
#include <unistd.h>

/* Programma che esegue lo scambio tra due valori */ 

using namespace std;

int main()
{
/* Dichiarazione di variabili */ 
 int a;
 int b;

/* Input dei valori */
 cout << "Inserisci a \n";
 cin >> a;

 cout << "Inserisci b \n";
 cin >> b;

 cout << "I valori sono: " << a << " e " << b << endl;

/* Scambio con il metodo xor */
 a ^= b;
 b ^= a;
 a ^= b;

 sleep(2);

/* Stampa dei valori */
 cout << "I valori scambiati sono: " << a << " e " << b << endl;

 return 0;

}


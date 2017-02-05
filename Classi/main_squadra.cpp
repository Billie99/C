#include <iostream>
#include "squadra.hpp"

using namespace std;

int main()
{
 squadra inter;
 squadra2 milan;
 int scelta;

 cout << "Inserisci la squadra che preferisci (1 - inter, 2 - milan) \n";
 cin >> scelta;

 switch(scelta){

 case 1:
 inter.inserisci_punti(24);
 cout << "I punti della squadra inter sono: " << inter.stampa_punti() << endl;
 break;

 case 2:
 milan.inserisci_punti(13);
 cout << "I punti della squadra milan sono: " << milan.stampa_punti() << endl;
 break;

 }
 
}

/* Questo programma converte un carattere

 in formato binario */

#include <iostream>

using namespace std;

int main()
{
 char a;

 cout << "inserisci un carattere \t";
 cin >> a;

 cout << "La sua conversione in binario e' : " 
 <<(bool)(a & (1<<7)) //10000000
 <<(bool)(a & (1<<6)) //01000000
 <<(bool)(a & (1<<5)) //00100000
 <<(bool)(a & (1<<4)) //00010000
 <<(bool)(a & (1<<3)) //00001000
 <<(bool)(a & (1<<2)) //00000100
 <<(bool)(a & (1<<1)) //00000010
 <<(bool)(a & (1<<0)) //00000001
 << endl;

 return 0;
}

#include <iostream>
#include <stdbool.h>

using namespace std;

int main(){

int dato;

cout << "Inserisci un numero da convertire \n";
cin >> dato;

int byte = dato;

cout << "il numero convertito in binario e' \n"

<< (bool)(byte & (1<<7)) // 10000000 
<< (bool)(byte & (1<<6)) // 01000000
<< (bool)(byte & (1<<5)) // 00100000
<< (bool)(byte & (1<<4)) // 00010000
<< (bool)(byte & (1<<3)) // 00001000
<< (bool)(byte & (1<<2)) // 00000100
<< (bool)(byte & (1<<1)) // 00000010
<< (bool)(byte & (1<<0)) // 00000001

<< endl;


return 0;

}

#include <iostream>
#include "scuola.h"

using namespace std;

int main(){

scuola nome;
scuola cognome;

nome.set("Giandomenico");

cout << nome.get() << endl;

return 0;

}

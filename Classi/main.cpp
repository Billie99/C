#include <iostream>
#include "scuola.hpp"

using namespace std;

int main(){

scuola nome;

nome.set("Giandomenico");

cout << nome.get() << endl;
cout << nome.ricerca() << endl;

return 0;

}

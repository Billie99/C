#include <iostream>
#include "squadra.hpp"

squadra::squadra()
{
 this->punti = 0;
}

void squadra::inserisci_punti(int c)
{
 this->punti = c;
}

int squadra::stampa_punti()
{
 return this->punti;
}


squadra2::squadra2()
{
 this->punti = 0;
}

void squadra2::inserisci_punti(int c)
{
 this->punti = c;
}

int squadra2::stampa_punti()
{
 return this->punti;
}

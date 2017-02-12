#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
 int a;
 int i;
 int c;
 int z = 0;

 cout << "Associamo ai giorni della settimana dei numeri: Lunedi,Martedi.. 1,2,3 \n";
 cout << "Inserisci il numero da determinare (ad esempio fra 10 giorni che giorno sara') \n";
 cin >> a;

 cout << "Inserisci il giorno in numeri \n";
 cin >> c;

 if(a == 0 || c == 0)
{
 cout << "Il numero di giorni non e' specificato \n";
 exit(0);
}
 else
{
 z = (c + a) % 7;
}
 cout << "Fra " << a << " giorni sara' " << z << endl;

 return 0;

}

#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
 int a;
 int b;

 cout << "Inserisci a \n";
 cin >> a;

 cout << "Inserisci b \n";
 cin >> b;

 cout << "I valori sono: " << a << " e " << b << endl;

 a ^= b;
 b ^= a;
 a ^= b;

 sleep(2);

 cout << "I valori scambiati sono: " << a << " e " << b << endl;

 return 0;

}


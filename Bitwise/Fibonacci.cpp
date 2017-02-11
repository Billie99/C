#include <iostream>

using namespace std;

int main()
{
 int n;
 int primo_numero = 0;
 int secondo_numero = 1;
 int somma;

 cout << "Inserisci il numero che vuoi trasformare \n";
 cin >> n;

 for(int i = 0; i < n; i++)
{
 if(i <= 1)
{
 somma = i;
}
 else
{
 somma = primo_numero + secondo_numero;
 primo_numero = secondo_numero;
 secondo_numero = somma;
}

 cout << somma << endl;

}

 return 0;
}

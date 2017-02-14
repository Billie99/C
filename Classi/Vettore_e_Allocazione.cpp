#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

char* stringa(char* t)
{
 int len = strlen(t);
 int cont = 0;
 int i;
 t = NULL; 

 t = new char[len + 1];
 t[len] = '\0';

 for(i = 0; i < len; i++)
{
 cout << "Inserisci gli elementi nel vettore \t";
 cin >> t[i];
 
 cont = cont + 1;
}
 cout << "La stringa che hai immesso e': " << t << endl;
 sleep(2);

 if(t != NULL) delete[] t;
 cout << "Cella di memoria liberata \n";
 
 sleep(2);  

 cout << "Abbiamo inseriti : " << cont << " " << "elementi nel vettore \n";

 return t;

}

int main()
{
 char vettore[6];
 
 stringa(vettore);

 return 0;
}

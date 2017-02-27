#include <iostream>
#include <string.h>

using namespace std;

char* convert_minuscolo(char *s)
{
  int i;

  for(i = 0; s[i] != '\0'; i++)
  {
    cout << "Inserisci una stringa \n";
    cin >> s[i];

    if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
}
  return s;
}

int main()
{
  char vettore[5];
  char *s = convert_minuscolo(vettore);

  cout << "La stringa ottenuta e': " << s << endl;

  return 0;
}

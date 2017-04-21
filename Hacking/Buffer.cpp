#include <iostream>
#include <string.h>

using namespace std;

int foo(const char* stringa);

int main(int argc, char* argv[])
{

 int verita = 0;

if (argc < 2)
{

 cout << "Devi inserire almeno un altro argomento \n";

}

if (foo(argv[1]))
{

 verita = 1;
 cout << "***Accesso Garantito***\n";

}

else
{

 cout << "***Accesso Negato***\n";

}

if (verita)
{

 cout << "Hai i privilegi di root \n";

}


 return 0;

}

int foo(const char* stringa)
{

 char buffer[5];
 int corretto = 0;

 strcpy(buffer, stringa);

 if (!strcmp(buffer, "ciao"))
{

 corretto = 1;

}

else
{

 corretto = 0;

}

return corretto;

}

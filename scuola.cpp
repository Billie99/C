#include <string.h>
#include "scuola.hpp"
#include <iostream>
#include <unistd.h>

using std::cout;

scuola::scuola()
{
 this->alunno = new char[1];
 this->alunno[0] = '\0';
}

scuola::scuola(const char str[])
{
 this->alunno = NULL;
 this->set(str);
}

void scuola::set(const char* str)
{
 int len = strlen(str);
 if(this->alunno!=NULL) delete[] this-> alunno;
 
 this->alunno = new char[len + 1];
 
 strncpy(this->alunno, str, len);
 this->alunno[len] = '\0';
}

scuola::~scuola()
{
 if(this->alunno!=NULL) delete[] this->alunno;
 
 sleep(3);
 
 cout << "Il distruttore e' stato attivato \n";
}

char* scuola::get()
{
 return this->alunno;
}
    

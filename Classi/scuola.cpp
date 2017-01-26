#include <string.h>
#include "scuola.hpp"
#include <iostream>
#include <unistd.h>

using std::cout; using std::cin;

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
 
 sleep(1);
 
 cout << "Il distruttore e' stato attivato \n";
}

char* scuola::get()
{
 return this->alunno;
}

int scuola::ricerca()
{
 int cont=0;
 char a;
 
 cout << "Inserisci il carattere da ricercare ";
 cin >> a;
 
 int len = strlen(this->alunno);
 for(int i = 0; i < len; i++)
{
  
 if(this->alunno[i] == a)
{ 
 cont +=1;
 cout << "La lettera si trova in posizione: " << i << std::endl;  

 }
  
 }
 cout<< "Il numero di volte in cui il carattere e' presente e' " ;
 return cont;
 }

    

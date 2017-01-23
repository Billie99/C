#ifndef SCUOLA_H
#define SCUOLA_H

class scuola{
private:
        char* alunno;
public:
        scuola();
        scuola(const char str[]);

        void set(const char* str);
        char* get();
        ~scuola();
};

#endif


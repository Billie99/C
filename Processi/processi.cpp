#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstdlib>

using namespace std;

int main(){

int pid = getpid();

cout << "Main Processo : PID  " << pid << endl;
cout << "Siamo nel processo padre \n";

sleep(2);

if((pid = fork()) == 0)
{
 cout << "Child Process : PID  " << getpid() << endl;
 cout << "Siamo nel processo figlio \n";
}

else if((pid = fork()) > 0)
{
 cout << "sono il processo padre e ho PID : " << getpid() << endl;
}

else
{
 cout << "Errore nella chiamata fork \n" << endl;
}

cout << "Program executed successfully... \n";

return 0;

}

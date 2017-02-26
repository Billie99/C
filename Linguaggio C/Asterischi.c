#include <stdio.h>
#include <time.h>

int main()
{
 struct timespec tempo;
 tempo.tv_sec = 0;
 tempo.tv_nsec = 700 * 1000* 1000;

 printf("*\n");
 nanosleep(&tempo, NULL);

 printf("*\n");
 nanosleep(&tempo, NULL);

 printf("*\n");
 nanosleep(&tempo, NULL);

 return 0;
}

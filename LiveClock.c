#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
    while(1)
    {
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "%s", asctime (timeinfo) );
        system("clear");
    }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
     int h,m,s;
        for (h = 0; h < 24; h++)
        {
            for (m = 0; m < 60; m++)
            {
                for (s = 0; s < 60; s++)
                {
                         system("clear");
                         fflush(stdout);
                         printf("%d:%d:%d",h,m,s);
                }  
            }
        }
    return 0;
}
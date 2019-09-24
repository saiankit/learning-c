#include <stdio.h>
int main ()
{
    int n,i,c;
    printf("Please enter the number whose multipliaction table is to be printed \n");
    scanf("%d",&n);
    //The Loop
    for (i = 1; i <= 10 ; i++)
    {
        c = n * i;
        printf("%d x %d = %d \n",n,i,c);
    }
}
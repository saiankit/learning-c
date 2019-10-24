#include <stdio.h>
int bin(int n)
{
    if(n==0)
        {
            return 0 ;
        }
    else
    {
        return 10*(bin(n/2))+(n%2);
    }
}
int main()
{
    int n,x;
    printf("Please enter the decimal number \n");
    scanf("%d",&x);
    n = x;
    printf("The binary equivalent of %d is %d \n",x,bin(n));
}

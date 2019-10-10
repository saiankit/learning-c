#include <stdio.h>
int power(int b , int e)
{
    if (e==1)
    {
        return b;
    }
    else
    {
        return power(b,e-1) * b ;
    }
}
int main()
{
    int b,e,p;
    printf("Please enter the base. \n");
    scanf("%d",&b);
    printf("Please enter the exponent. \n");
    scanf("%d",&e);
    p = power(b,e);
    printf("%d",p);
}
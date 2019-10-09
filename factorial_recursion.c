#include <stdio.h>
int fac(int n);
int main()
{
    int a,r;
    printf("Enter any number.\n");
    scanf("%d",&a);

    r = fac(a);

    printf("The value of %d ! is %d",a,r);
}

int fac(int n)
{
    if (n>=1)
    {
        return n * fac(n-1);
    }
    else
    {
        return 1;
    }
}
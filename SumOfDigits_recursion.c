#include <stdio.h>
int sum(int n , int s)
{
    if (n==0)
    {
        return s;
    }
    else
    {
        return sum(n/10,s+n%10);
    }
}
int main()
{
    int x,n;
    int s =0;
    printf("Please enter the number. \n");
    scanf("%d",&x);
    n = x;
    printf("The sum of digits of %d is %d . \n",x,sum(n,s));
}
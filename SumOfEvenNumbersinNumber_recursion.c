#include <stdio.h>
int sum(int n , int s)
{
    if (n==0)
    {
        return s;
    }
    else
    {
        //if the digit is odd then (n+1)%2 will become zero and boom!!
        return sum(n/10,s+(n%10)*((n+1)%2));
    }
}
int main()
{
    int x,n;
    int s =0;
    printf("Please enter the number. \n");
    scanf("%d",&x);
    n = x;
    printf("The sum of even digits of %d is %d . \n",x,sum(n,s));
}
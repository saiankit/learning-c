#include <stdio.h>
int rev(int n,int s)
{
    if (n <=9)
        return (s*10)+(n%10);
    else
    {
        return rev(n/10,(s*10)+(n%10));
    }
}
int main()
{
    int n,x;
    int s=0;
    printf("Please enter the number \n");
    scanf("%d",&x);
    n = x;
    printf("The reverse of %d is %d \n",x,rev(n,s));
}

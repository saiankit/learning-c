#include <stdio.h>
int binreversed(int n , int s)
{
    if(n==1)
        {
            return (s*10)+(n%2) ;
        }
    else
    {
        return binreversed(n/2,(s*10)+(n%2));
    }
}
int rev(int a,int b)
{
    if (a <=9)
        return (b*10)+(a%10);
    else
    {
        return rev(a/10,(b*10)+(a%10));
    }
}
int main()
{
    int n,x,BinRev;
    int s=0,y=0;
    printf("Please enter the decimal number \n");
    scanf("%d",&x);
    n = x;
    BinRev = binreversed(n,s);
    printf("The binary equivalent of %d is %d \n",x,rev(BinRev,y));
}
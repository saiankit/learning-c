#include <stdio.h>
int main()
{
    int n,i,c,m;
    printf("Please enter the number \n");
    scanf("%d",&n);

    c=0;
    while ((n%10)!=0)
    {
        c = c + 1;
        n = n/10;
  
    }
    printf("The number of digits in the given number is %d \n",c);
}
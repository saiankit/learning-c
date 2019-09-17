#include <stdio.h>
int main()
{
    float n,i;
    float sum;
    //Series = 1 + 1/2 + 1/3 + ...+ 1/n
    printf("Enter upto which 'n' the sum of series should go on. \n");
    scanf("%f",&n);
    for (i = 1,sum = 0; i <= n; i++)
    {
        sum = sum + (1/i);
    }
    printf("The sum of the series is %f",sum);
}
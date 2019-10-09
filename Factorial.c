#include <stdio.h>
int main()
{
    int n,i,Product;
    printf("Program to calculate n! \n");
    printf("Enter the number (n) for which factorial is to be calculated. \n");
    scanf("%d",&n);
    //TheLoop
    for (i = 1,Product =1; i <= n ; i++)
    {
        Product = Product * i;
    }
    printf("The value of %d! is %d \n ",n,Product);
}
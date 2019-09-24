#include <stdio.h>
int main()
{
    //printing a pattern of stars 
    int r,i,j;
    printf("Please enter the number of rows of stars you want to print \n");
    scanf("%d",&r);
    //The Loop
    for (i = 1; i <= r; ++i)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
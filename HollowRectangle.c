#include <stdio.h>
int main()
{
    //input the number of rows and coloumns from the user
    int r,c;
    printf("Please enter the number of rows. \n");
    scanf("%d",&r);
    printf("Please enter the number of coloumns. \n");
    scanf("%d",&c);
    //the loop to print the hollow rectangle
    int i,j;
    for (i=1 ; i <= 1; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i=2 ; i <= (r-1); i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            printf("*");
        }
        for (int j = 2; j <= (c-1); j++)
        {
            printf(" ");
        }
        for (int j = c; j <= c; j++)
        {
            printf("*");
        }   
        printf("\n");
    }
    for (i=r ; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
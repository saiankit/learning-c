#include <stdio.h>
int main()
{
    //input the number from the user
    int n;
    printf("Please enter the number of coloumns for one butterfly wing. \n");
    scanf("%d",&n);
    printf("\n");
    //the loop to print the butterfly
    //theupperloop
    int i,j;
    for (i = 1; i <= (n-1) ; i++)
    {
        //leftwing
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        //emptyspace
        for (j = (i+1); j <= ((2*n)-i); j++)
        {
            printf(" ");
        }
        for (j = (((2*n)-i)+1); j <= (2*n); j++)
        {
            printf("*");
        }     
        printf("\n");
    }
    //themiddlepart
    for (i = n; i <= n+1; i++)
    {
        for (j = 1; j <= (2*n); j++)
        {
            printf("*");
        }
        printf("\n");   
    }
    //thebottomloop
    for (i = n+2; i <= (2*n); i++)
    {
        //leftwing
        for (j = 1; j <= (((2*n)-i)+1); j++)
        {
            printf("*");
        }
        //emptyspace
        for (j = (((2*n)-i)+2) ; j <=(i-1); j++)
        {
            printf(" ");
        }
        for (j = i; j<=(2*n); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
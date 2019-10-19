#include <stdio.h>
int main()
{
    //input the number of rows and coloumns from the user
    int r,c;
    printf("Please enter the number of rows. \n");
    scanf("%d",&r);
    printf("Please enter the number of coloumns. \n");
    scanf("%d",&c);
    //the loop to print the solid rectangle
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    //printing a pattern of numbers
    int r,c,i,j;
    printf("Please enter the number of rows and coloumns of stars you want to print \n");
    scanf("%d %d",&r,&c);
    //The Loop
    for (i = 1; i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}
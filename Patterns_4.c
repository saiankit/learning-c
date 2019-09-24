#include <stdio.h>
int main()
{
    //printing a pattern of stars in reverse way
    int r,i,j;
    printf("Please enter the number of star rows you want to print \n");
    scanf("%d",&r);
    //The Loop
    for (i = 1; i <= r; i++)
    {
        for(j = 1 ; j <= (r-i) ; j++)
        {
            printf(" ");
        }
        for(j = (r -i + 1); j <= r ;j++)
        {
            printf("*");
        }
        printf("\n");  
    }  
}
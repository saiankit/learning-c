#include <stdio.h>
int main()
{
    //printing a pattern of diamond  
    int r,i,j;
    char c;
    printf("Please enter the character you want to print in the diamond pattern \n");
    scanf("%c",&c);
    printf("Please enter the number of rows you want to print the diamond \n");
    scanf("%d",&r);
    //The Loop
    for (i = 1; i <= r/2; i++)
    {
        for(j = 1 ; j <= ((r/2)-i+1) ; j++)
        {
            printf(" ");
        }
        for(j = ((r/2)-i+2); j <= ((r/2)+i) ;j++)
        {
            printf("%c",c);
        }
        for (j=((r/2)+i+1) ;j <= r; j++)
        {
             printf(" ");
        }
        printf("\n");  
    }  
    for (i = ((r/2) +1); i <=((r/2) +1) ; i++)
    {
        for (j = 1; j <=  r; j++)
        {
            printf("%c",c);
        }
        printf("\n");  
    }
    for (i = ((r/2)+2); i <= r; i++)
    {
        for (j = 1; j <(i-(r/2)) ; j++)
        {
            printf(" ");
        }
        for (j =(i-(r/2)); j <= (r+1-(i-(r/2))); j++)
        {
            printf("%c",c);
        }
        for (j = (r+2-(i-(r/2))); j <= r; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    //Program To Print a Floyd's Triangle.
    int r,n=1;
    printf("Enter the number of rows -->");
    scanf("%d",&r);
    for (int i = 1; i <= r; i++)
    {
        n = n + i - 1;
            for (int j = 1; j <= i; j++)
            {
                int c = n + j - 1;
            printf("%d",c);
            printf(" ");
            }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c;
    printf("\n Please enter the number of rows and coloumns of the array. \n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int tra[c][r];
//Input into Array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element at (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
//Transpose array
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            tra[i][j]=arr[j][i];
        }
    }    
//Printing the array
printf("\n Given Array \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose Array \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d",tra[i][j]);
        }
        printf("\n");
    }
}
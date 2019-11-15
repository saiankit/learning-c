#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}  
int main()
{
    int arr[100];
    int n,found,element;
    found =0;
    //InputArray
    printf("Please enter the number of elements.\n");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you are looking for. \n");
    scanf("%d",&element);
    int *item;
    item = (int *)bsearch(&element,arr,n,sizeof(int),cmpfunc);
    if (item!=0)
    {
        printf("Element is found.\n");
    }
    else
    {
        printf("Element is not found. \n");
    }
}
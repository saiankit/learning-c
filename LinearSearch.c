#include <stdio.h>
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
    //Linear Search
    printf("Enter the element you are looking for. \n");
    scanf("%d",&element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            printf("The element %d has been found in the array at index %d \n",element,i);
            found = 1;
            break;
        }
    }
    if (found==0)
    {
        printf("The element is not present in the array.\n");
    }
}
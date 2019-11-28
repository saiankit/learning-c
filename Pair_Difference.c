#include <stdio.h>
#include <stdlib.h>
void CheckForDifference(int a[2],int diff)
{
    if (a[0]>a[1])
    {
        int d;
        d = a[0] - a[1]; 
        if (d==diff)
           printf("The Pair is (%d,%d)",a[0],a[1]);
    }
    else
    {
        int l;
        l = a[1] - a[0]; 
        if (l==diff)
           printf("The Pair is (%d,%d). \n",a[0],a[1]);
    }
}
int main()
{
    //InputArray
    int length,diff;
    printf("Please enter the length of the array. \n");
    scanf("%d",&length);
    int arr[length],a[2];
    printf("Please enter the array. \n");
    for (int i = 0; i <length ; i++)
    {
        scanf("%d",&arr[i]);
    }
    //InputDifference
    printf("Please enter the expected difference. \n");
    scanf("%d",&diff);
    //PairingUp
        for (int i = 0; i < length; i++)
        {
            for (int j = i+1; j < length; j++)
            {
                a[0] = arr[i];
                a[1] = arr[j];
                CheckForDifference(a,diff);
            }
        }
}
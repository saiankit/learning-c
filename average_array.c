#include <stdio.h>
int main()
{
    int n;
    double  sum,av;
    sum =0;
    printf("Enter the number of elements. \n");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter the elements .\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    av = sum / n;
    printf("%f \n",av);
}
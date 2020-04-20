#include <stdio.h>
int main()
{
    printf("Pleas enter any number --> \n");
    scanf("%d",&num
    )
}



int palindrome(int arr[], int n) 
{ 
    int flag = 0; 
    for (int i = 0; i <= n / 2 && n != 0; i++) { 
        if (arr[i] != arr[n - i - 1]) { 
            flag = 1; 
            break; 
        } 
    } 
    if (flag == 1) 
        return 0; //Not
    else
        return 1; //Yes
} 
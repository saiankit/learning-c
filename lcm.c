#include <stdio.h>
int main()
{
    int a,b;
    printf("Please enter the two numbers. \n");
    scanf("%d %d",&a,&b);
    int flag = b;
    while(1)
    {
        if(flag%a==0 && flag%b==0)
        {
            printf("The LCM of the two numbers %d and %d is %d.\n",a,b,flag);
            break;
        }
        flag++;
    }
}
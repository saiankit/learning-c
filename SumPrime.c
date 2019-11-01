#include <stdio.h>
#include <math.h>
int checkprime(int a)
{
    int flag;
    for(int i = 2; i <= sqrt(a); ++i)
    {
        if(a%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (a == 1) 
    {
      return 0;
    }
    else 
    {
        if (flag == 0)
          return 1;
        else
          return 0;
    }
}
int main()
{
    int num,fact;
    int sum=0;
    printf("Please enter a number \n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            fact = i;
            if(checkprime(i)==0);
            else if (checkprime(i)==1)
            {
                sum = sum + i;
            }
        }
    }
    printf("%d \n",sum);
}
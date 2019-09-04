#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Please enter any two numbers \n");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        c = a%b;
        if (c==0)
        {
            printf("%d is factor of %d",b,a);
        }
        else
        {
            printf("The given numbers are not factors of either in anyway.");
        }  
    }
    else
    {
        d=b%a;
            if (d==0)
                    {
                        printf("%d is factor of %d",a,b);
                    }
                    else
                    {
                        printf("The given numbers are not factors of either in anyway.");
                    }
    }
}
#include <stdio.h>
void swap(int *num1,int *num2)
{
    num1 = &num2;
    num2 = &num1;
}
int main()
{
    int a,b,c,large,small,rem,gcd;
    printf("Enter the two numbers.\n");
    scanf("%d %d",&a,&b);
    //making b the maximum number
    if(b>a);
    else
        swap(&a,&b);
    //GCD Code
    large = b;
    small = a;
    rem = large % small;
    while(1)
    {
        if(rem==0)
        {
            gcd = small ;
            break;
        }
        else
        {
            large = small;
            small = rem;
            rem = large % small;
        }    
    }
    printf("GCD is %d \n",gcd);
}
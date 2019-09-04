#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,s;
    int r;

    printf("Please enter the two numbers --> \n");
    scanf("%f %f",&a,&b);

    printf("Please enter the operation you want to perform --> \n");
    printf("1 - Addition \n");
    printf("2 - Subtraction \n");
    printf("3 - Multiplication \n");
    printf("4 - Division \n");
    printf("5 - Power \n");

    scanf("%i",&r);

    switch (r)
    {
    case 1:
        s = a + b ;
        printf("The Sum is %f",s);
        break;

    case 2:
        s = a - b ;
        printf("The Difference is %f",s);
        break;

    case 3:
        s = a * b ;
        printf("The Product is %f",s);
        break;

    case 4:
        s = a / b ;
        printf("The Quotient is %f",s);
        break;
        
    case 5:
        s = pow(a , b) ;
        printf("The Value is %f",s);
        break;    
    
    default:
        break;
    }
}
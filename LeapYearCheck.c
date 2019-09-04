#include <stdio.h>
int main()
{
    int YearNumber;
    int Remainder;
    
    printf("Please enter the year --> \n");
    scanf("%d",&YearNumber);

      Remainder = YearNumber % 4;

    if (YearNumber>=2000 && YearNumber<2100)
    {
        if (Remainder == 0)
        {
            printf("The year %d is a leap year \n",YearNumber);
        }
        else
        {
            printf("The year %d is not a leap year \n",YearNumber);
        }
    }
    else
    {
        printf("Please enter year in 21st century only!! \n");
    }
        return 0;
}

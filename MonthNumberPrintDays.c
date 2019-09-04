#include <stdio.h>
int main()
{
    int month_number;
        printf("Please enter the month date --> \n");
        scanf("%d",&month_number);
            if(month_number < 1 || month_number > 12)
            {
                printf("ERROR!! \n Please enter a valid month date");
            }
            else
            {
                if ( (month_number == 1) || (month_number == 3) || (month_number == 5) || (month_number == 7) || (month_number == 8) || (month_number == 10) || (month_number == 12) )
                {
                    printf("Your month has 31 Days \n");
                }
                else if( (month_number == 4) ||(month_number == 6) ||(month_number == 9) ||(month_number == 11))
                {
                    printf("Your month has 30 days \n");
                }
                else 
                {
                    printf("Your month has 28 days \n");
                }
            }
}
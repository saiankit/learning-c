#include <stdio.h>
int main()
{
    int Score;

    printf("Please enter the score attained by the individual --> \n");
    scanf("%d",&Score);

        if ( ( Score == 9 ) || ( Score == 10 ) )
        {
            printf("The Grade the Student attained in the quiz is A \n");
        }
        else if ( ( Score == 8 ) || ( Score == 7 ) )
        {
             printf("The Grade the Student attained in the quiz is B \n");
        }
        else if ( ( Score == 6 ) || ( Score == 5 ) )
        {
             printf("The Grade the Student attained in the quiz is C \n");
        }
        else if ( ( Score == 4 ) || ( Score == 3 ) )
        {
             printf("The Grade the Student attained in the quiz is D \n");
        }
        else
        {
            printf("The Grade the Student attained in the quiz is E \n");
        }
}

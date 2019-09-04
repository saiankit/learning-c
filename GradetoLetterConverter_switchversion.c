#include <stdio.h>
#include <math.h>

int main()
{
    int Score;

    printf("Please enter the score attained by the individual --> \n");
    scanf("%d",&Score);

    switch (Score)
    {
         case 1 :
            printf("Grade is F \n");
            break;
       case 2 :
            printf("Grade is F \n");
            break;
       case 3 :
            printf("Grade is D \n");
            break;
       case 4 :
            printf("Grade is D \n");
            break;
       case 5 :
            printf("Grade is C \n");
            break;
       case 6 :
            printf("Grade is C \n");
            break;
       case 7 :
            printf("Grade is B \n");
            break;
       case 8 :
            printf("Grade is B \n");
            break;
       case 9 :
            printf("Grade is A \n");
            break;
       case 10 :
            printf("Grade is A \n");
            break;
         default:
            printf("Grade is not valid \n");
            break;
    }
}
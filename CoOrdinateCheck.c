#include <stdio.h>
int main()
{
    float x,y;
    printf("Please enter the x-CoOrdinate --> \n");
    scanf("%f",&x);
    printf("Please enter the y-CoOrdinate --> \n");
    scanf("%f",&y);

    if ((x>0) && (y>0))
    {
        printf("The point entered is in I Quadrant. \n");
    }
    else
    {
        if ((x>0)&&(y<0))
        {
            printf("The point entered is in IV Quadrant. \n");
        }
        else
        {
            if ((x<0)&&(y>0))
            {
                printf("The point entered is in II Quadrant. \n");
            }
            else
            {
                printf("The point entered is in III Quadrant. \n");
            }
        }
    }
    return 0;
}

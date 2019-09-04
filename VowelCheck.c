#include <stdio.h>
int main()
{
    char alphabet;

        printf("Please enter an alphabet --> \n");
        scanf("%c",&alphabet);
                if ( (alphabet == 'a') || (alphabet == 'e') || (alphabet == 'i') || (alphabet == 'o') || (alphabet == 'u') )
                {
                    printf("The alphabet you entered is a vowel !! \n");
                }
                else
                {
                    printf("The alphabet you entered is a consonant !! \n");
                }
}
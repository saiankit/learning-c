#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10000],str2[10000];
	printf("Enter the number1.\n");
	scanf("%s",str1);
	printf("Enter the number2.\n");
	scanf("%s",str2);
	if (strcmp(str1,str2)>0||strcmp(str1,str2)<0)
	{
		printf("The strings are not same.\n");
	}
	else 
	{
		printf("The strings are same.\n");
	}
	return 0;
}
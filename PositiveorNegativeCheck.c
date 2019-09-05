#include <stdio.h>
int main()
{
	//Program to find whether the user entered number is a positve number or not

	int num;

	printf("Please enter any number \n");
	scanf("%d",&num);

	if (num>0)
	{
		printf("The number %d is a positve number \n",num);
	}
	else
	{
		printf("The number %d is a negative number \n",num );
	}
	return 0;
}
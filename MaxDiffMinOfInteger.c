#include <stdio.h>
#include <string.h>
//Program to find maximum and minimum of a number entered
int main()
{
	//variableDeclaration
	char ipstr[10000],max,min;
	int len;
	//inputparamters
	//input is taken as string
	printf("Enter the number.\n");
	scanf("%s",ipstr);
	len= strlen(ipstr);
	//converting a string into a characterarray
	char arr[len];
	for (int i = 0; i < len; i++)
	{
		arr[i] = ipstr[i];
	}
	//finding the maximum number
	max = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	//finding the minimum number
	min = max;
	for (int i = 0; i < len; i++)
	{
		if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	//output of the program
	printf("The Maximum Number is : %c\n",max);
	printf("The Minimum Number is :%c\n",min);
	printf("The Difference between the Maximum and Minimum is :%d\n",max-min);
	return 0;
}
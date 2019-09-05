#include <stdio.h>
int main()
{

	float a,s;
	int i,n;

	printf("Please enter the 'n' --> \n");
	scanf("%d",&n);


	for(s=0,i=1;i<(n+1);i++)
	{
		s = s +i ;
	}
	a = s/n;
	printf("The average of first ten natural numbers is %f",a);
}

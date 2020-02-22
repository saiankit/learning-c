#include <stdio.h>
int main()
{
  int n,count;
  count = 0;
  char ch;
  scanf("%d",&n);
  for(int i = 1 ; i <= n ; i ++)
  {
      for(int j = 1 ; j <= i ; j ++)
      {
        if(count%2==0)
          ch = 97 + n - i;
        else
          ch = 65 + n - i;
        printf("%c ",ch);
        count++;
      }
      printf("\n");
  }
}

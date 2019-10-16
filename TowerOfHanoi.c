#include <stdio.h>
void hanoi(int n,char from,char aux,char to)
{
    if (n==0)
    {
        return;
    }
    else
    {
    //Move n-1 blocks from from to aux
     hanoi(n-1,from,aux,to);
    //Move 1 block from from to to
    printf("One Block is moved from %c to %c. \n",from,to);
    //Move the n-1 blocks from aux to to
     hanoi(n-1,aux,from,to);
    }
}
int main()
{
    int x;
    char a,b,c;
    printf("Please enter the number of Hanoi blocks. \n");
    scanf("%d",&x);
    hanoi(x,'a','b','c');
}

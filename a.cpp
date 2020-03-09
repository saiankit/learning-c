#include <iostream>
using namespace std;
int fac(int n)
{
    if (n>=1)
    {
        return n * fac(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,r;
    cout<<"Enter any number \n";
    cin>>a;
    r = fac(a);
    cout<<"The value of "<<a<<"! is "<<r;
}




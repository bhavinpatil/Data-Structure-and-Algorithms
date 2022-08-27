#include<iostream>
using namespace std;

int power(int m, int n)
{
    if(n==0)
    return 1;
    return power(m,n-1)*m;
}

int power1(int m, int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return power1(m*m, n/2);
    return m*power1(m*m,(n-1)/2);
}

int powerfor(int m, int n)
{
    int p = 1;
    for(int i=1; i<=n; i++)
    return powerfor(m, n-1)*m;
}

int main()
{
    cout<<"9 to the power 2 is "<<powerfor(2,9)<<endl;
    return 0;
}
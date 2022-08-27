#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double s=1;
    if(n==0)
    return s;
    s = 1+x*s/n;
    return e(x,n-1);
}

double Ie(int x, int n)
{
    double s = 1;
    double num=1, den=1;
    for(int i=1; i<=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    cout<<"Using Recursive Function "<<e(2,10)<<endl;
    cout<<"Using Iterative Function "<<Ie(2,10)<<endl;
}
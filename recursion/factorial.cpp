#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;
}

int main()
{
    int f = fact(5);
    cout<<"Factorial of 5 is "<<f<<endl;
    return 0;
}
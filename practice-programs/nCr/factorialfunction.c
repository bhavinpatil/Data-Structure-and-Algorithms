#include<stdio.h>

int fact(int n)
{
    if(n==0)return 1;
    return fact(n-1)*n;
}

int fun(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n-r);
    return num/den;
}

int main()
{
    printf("%d", fun(5,2));
    return 0;
}
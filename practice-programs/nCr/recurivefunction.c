#include<stdio.h>

int fun(int n, int r)
{
    if(r == 0 || n == r) return 1;
    return fun(n-1, r-1)+fun(n-1, r);
}

int main()
{
    printf("%d", fun(5,1));
    return 0;
}
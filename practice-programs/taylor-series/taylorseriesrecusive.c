#include<stdio.h>

double taylor(int x, int n)
{
    static double p=1,f=1;
    double s;
    if(n==0)
    return 1;
    s = taylor(x,n-1);
    p = p*x;
    f = f*n;
    return s+p/f;
}

int main()
{
    printf("%fl",taylor(1,10));
    return 0;
}
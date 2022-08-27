#include<stdio.h>
double e(int x, int n)   //<------- Recursive Funtion
{
    static double s = 1;
    if(n==0)
    return s;
    s = 1+x*s/n;
    return e(x, n-1);
}


double Ie(int x, int n)   //<-----------Iterative Funtion
{
    static double nem=1, dem=1, r = 1;
    for(int i=1; i<=n; i++)
    {
        nem*=x;
        dem*=i;
        r+=nem/dem;
    }
    return r;
}

int main()
{
    printf("%fl\n",e(1,10));
    printf("%fl\n",Ie(1,10));
    return 0;
}
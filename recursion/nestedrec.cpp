#include <stdio.h>
int fun(int n)
{
    if (n > 100)
    {
        printf("%d\n", n);
        return n - 10;
    }
    else
    {
        printf("%d\n", n);
        return fun(fun(n + 11));
    }
}

int main()
{
    int a = 95;
    int r = fun(a);
    printf("%d\n",r);
}
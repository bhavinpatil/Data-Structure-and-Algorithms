#include<stdio.h>

void fun2(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun2(n-1);
    }
}
int main()
{
    int a = 5;
    fun2(a);
    return 0;
}
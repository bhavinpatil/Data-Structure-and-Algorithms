#include<stdio.h>

void ToH(int n, int A, int B, int C)
{
    if(n>0)
    {
        ToH(n-1,A,C,B);
        printf("%d to %d\n",A,C);
        ToH(n-1,B,A,C);
    }
}

int main()
{
    ToH(3,1,2,3);
    return 0;
}
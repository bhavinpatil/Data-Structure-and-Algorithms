#include<stdio.h>

void func(int n, int A, int B, int C)
{
    if(n>0)
    {
        func(n-1, A, C, B);
        printf("Move Disk from Tower %d to Tower %d \n",A,C);
        func(n-1, B, A, C);
    }
}

int main()
{
    func(4,1,2,3);
    return 0;
}
#include<stdio.h>

//--------Using Recusrive Funtion-------- 
// int fun(int n)
// {
//     if(n==0)
//     return 0;
//     return fun(n-1)+n;
// }
// int main()
// {
//     int a = 10;
//     int r = fun(a);
//     printf("Sum of first 10 natural numbers is %d\n",r);
//     return 0;
// }

// Time Com - O(n)
// Space Com - O(n)


// //--------Using Formula--------
// int sum(int n)
// {
//     return n*(n+1)/2;
// }
// int main(){
//     int a = 10;
//     printf("%d\n",sum(a));
//     return 0;
// }

// Time Com - O(1);


//--------Using Loop--------

int sum(int n)
{
    int i,s = 0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}

int main()
{
    int a = 10;
    printf("%d\n",sum(a));
}


// Time Com - O(n); 
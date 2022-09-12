#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[] = "bhavin";
    char t;
    int i = 0;
    while(A[i]) i++;
    i = i-1;
    int j;
    for(j = 0; j<i; i--,j++)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    // B[j] = '\0';

     cout<<A<<endl;

     return 0;

}
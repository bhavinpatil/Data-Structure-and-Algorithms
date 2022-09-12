#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "bhavinratansingpatil";
    long int H=0, X=0;
    for(int i = 0; A[i]!='\0'; i++)
    {
        X = 1;
        X = X<<A[i]-97;
        if(X&H) cout<<A[i]<<" is Duplicate Character in the sting.\n";
        else H = X|H;
    }
}
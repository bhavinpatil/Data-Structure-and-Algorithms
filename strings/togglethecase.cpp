#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[] = "bHaViN";
    int i;
    for(i = 0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90) s[i] += 32;
        else if(s[i]>='a' && s[i]<= 122) s[i] -= 32;
    }

    // for(i = 0; s[i]!='\0';i++)
    // s[i] = s[i]+32;

    cout<<s<<endl;
    return 0;
}
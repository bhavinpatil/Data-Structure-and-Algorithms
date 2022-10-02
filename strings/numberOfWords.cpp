#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "Hii I am    Bhavin";
    int word=1;
    for(int i=0; A[i]!='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')
        word++;
    }

    cout<<"Number of Worlds in Given String is: "<<word<<endl;
    return 0;
}
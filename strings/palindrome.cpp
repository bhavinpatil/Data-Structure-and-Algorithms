#include <bits/stdc++.h>
using namespace std;

void palindrom(char S[])
{
    int i = 0, j;
    while (S[i])
        i++;
    i = i - 1;
    for (j = 0; j < i; i--, j++)
        if (S[j] != S[i])
        {
            cout << S << " is not Palindrome String\n";
            break;
        }

    if (S[j] == S[i])
        cout << S << " is Palindrome String\n";
}

int main()
{
    char A[] = "madam";
    char B[] = "nivin";
    char C[] = "laaaaeaaaal";
    char D[] = "lbbaeaabbl";
    palindrom(A);
    palindrom(B);
    palindrom(C);
    palindrom(D);
    return 0;
}
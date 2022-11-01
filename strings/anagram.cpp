#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "medical";
    char B[] = "decimal";
    int i, H[26] = {0};
    for (i = 0; A[i] != '\0'; i++)
        H[A[i] - 97]++;

    for (i = 0; B[i] != '\0'; i++)
    {
        H[A[i] - 97]--;
        if (H[A[i] - 97] < 0 || H[A[i] - 97] > 0)
        {
            cout << "Not Anagram\n";
            break;
        }
    }
    if (B[i] == '\0')
        cout << "Anagram!!!\n";

    return 0;
}
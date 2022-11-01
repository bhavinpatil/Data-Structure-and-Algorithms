#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "Darth Vader";
    char B[] = "Darth Vader";
    int i = 0, j = 0;
    while (A[i] && B[j])
    {
        if (A[i] != B[j])
            break;
        i++, j++;
    }
    if (A[i] == B[j])
        cout << "Equal!" << endl;
    else if (A[i] > B[j])
        cout << "1st string is greater than 2nd string" << endl;
    else
        cout << "2st string is greater than 1nd string" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()

{
    int A[3][4][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
                cout << "* ";
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
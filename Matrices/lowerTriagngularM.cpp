#include <bits/stdc++.h>
using namespace std;

class lowerTriangularM
{
private:
    int n;
    int *A;

public:
    lowerTriangularM()
    {
        n = 2;
        A = new int[n];
    }
    lowerTriangularM(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~lowerTriangularM()
    {
        delete[] A;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void lowerTriangularM::set(int i, int j, int x)
{
    if (i >= j)
        A[i * (i + 1) / 2 + j - 1] = x;
}

int lowerTriangularM::get(int i, int j)
{
    if (i >= j)
        return A[i * (i + 1) / 2 + j - 1];
    else
        return 0;
}

void lowerTriangularM::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i * (i + 1) / 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter dimensions";
    cin >> d;
    lowerTriangularM lt(d);
    int x;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lt.set(i, j, x);
        }
    }
    cout << "==============" << endl;
    lt.display();
    return 0;
}
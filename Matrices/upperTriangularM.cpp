#include <bits/stdc++.h>
using namespace std;

class upperTriangularM
{
private:
    int n;
    int *A;

public:
    upperTriangularM()
    {
        n = 2;
        A = new int[n];
    }
    upperTriangularM(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~upperTriangularM()
    {
        delete[] A;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void upperTriangularM::set(int i, int j, int x)
{
    if (j >= i)
        A[j * (j + 1) / 2 + i - 1] = x;
}

int upperTriangularM::get(int i, int j)
{
    if (j >= i)
        return A[j * (j + 1) / 2 + i - 1];
    else
        return 0;
}

void upperTriangularM::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                cout << A[j * (j + 1) / 2 + i - 1] << " ";
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
    upperTriangularM lt(d);
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
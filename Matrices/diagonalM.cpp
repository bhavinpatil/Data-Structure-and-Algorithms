#include <bits/stdc++.h>
using namespace std;

class diagonal
{
private:
    int n;
    int *A;

public:
    diagonal()
    {
        n = 2;
        A = new int[n];
    }
    diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~diagonal()
    {
        delete[] A;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void diagonal::set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}
int diagonal::get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}

void diagonal::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << A[i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    diagonal d(5);
    d.set(1, 1, 5);
    d.set(2, 2, 10);
    d.set(3, 3, 15);
    d.set(4, 4, 20);
    d.set(5, 5, 25);
    d.display();
    return 0;
}
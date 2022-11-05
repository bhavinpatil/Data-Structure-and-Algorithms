#include <bits/stdc++.h>
using namespace std;

struct Elements
{
    int i;
    int j;
    int x;
};

struct Sparse
{
    int m;
    int n;
    int num;
    struct Elements *e;
};

void create(struct Sparse *s)
{
    cout << "Enter Dimensions:" << endl;
    cin >> s->m >> s->n;
    cout << "Enter Number of Non-zeros" << endl;
    cin >> s->num;

    s->e = new Elements[s->num];

    cout << "Enter All Elements" << endl;
    for (int i = 1; i <= s->num; i++)
    {
        cin >> s->e[i].i >> s->e[i].j >> s->e[i].x;
    }
}

void display(struct Sparse s)
{
    int i, j, k = 1;
    for (i = 1; i <= s.m; i++)
    {
        for (j = 1; j <= s.n; j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
                cout << s.e[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    struct Sparse s;
    create(&s);
    display(s);
    return 0;
}

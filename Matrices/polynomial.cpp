#include <bits/stdc++.h>
using namespace std;

struct Term
{
    int coef;
    int exp;
};

struct polynomial
{
    int n;
    struct Term *t;
};

void create(struct polynomial *p)
{
    cout << "Enter Number of Terms: ";
    cin >> p->n;
    p->t = new Term[p->n];
    cout << "Enter Terms " << endl;
    for (int i = 0; i < p->n; i++)
    {
        cin >> p->t[i].coef >> p->t[i].exp;
    }
}

struct polynomial *add(struct polynomial *p1, struct polynomial *p2)
{
    struct polynomial *sum;
    sum = new polynomial[p1->n + p1->n];
    sum->t = new Term[p1->n + p2->n];

    int i, j, k;
    i = j = k = 0;
    while (i < p1->n && j < p2->n)
    {
        if (p1->t[i].exp > p2->t[j].exp)
            sum->t[k++] = p1->t[i++];
        else if (p1->t[i].exp < p2->t[j].exp)
            sum->t[k++] = p2->t[j++];
        else    
        {
            sum->t[k].exp = p1->t[i].exp;
            sum->t[k++].coef = p1->t[i++].coef + p2->t[j++].coef;
        }
    }

    for (; i < p1->n; i++)
        sum->t[k++] = p1->t[i];
    for (; j < p2->n; j++)
        sum->t[k++] = p2->t[j];
    sum->n = k;
    return sum;
}

void display(struct polynomial p)
{
    for (int i = 0; i < p.n; i++)
        cout << p.t[i].coef << "x" << p.t[i].exp << "+";
    cout << endl;
}

int main()
{
    struct polynomial p1, p2, *p3;
    cout << "First Polynomial: " << endl;
    create(&p1);
    cout << "Second Polynomial: " << endl;
    create(&p2);
    p3 = add(&p1, &p2);
    cout << "First Polynomial: " << endl;
    display(p1);
    cout << "Second Polynomial: " << endl;
    display(p2);
    cout << "Additon of Both Polynomial: " << endl;
    display(*p3);
    return 0;
}

#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
};


int search(struct Array *arr, int s)
{
    for(int i = 0; i<arr->length; i++)
    {
        if(s == arr->A[i])
        return i;
    }
    return -1;
}

int main()
{
    int s;
    struct Array arr={{1,2,3,4,5},5};
    cout<<"enter the element to search ";
    cin>>s;
    cout<<search(&arr, s);

    return 0;
}
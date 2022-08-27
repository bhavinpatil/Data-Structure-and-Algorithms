#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout<<"Elements are : "<<endl;
    for(int i = 0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}

int main()
{
    struct Array arr;

    cout<<"Enter the size of Array "<<endl;
    cin>>arr.size;

    arr.A = new int[arr.size];

    arr.length = 0;
    int n;
    cout<<"Enter the total number of elements"<<endl;
    cin>>n;

    cout<<"Enter the array elements "<<endl;

    for(int i = 0; i<n;i++)
    cin>>arr.A[i];

    arr.length = n;
    Display(arr);
    return 0;
}

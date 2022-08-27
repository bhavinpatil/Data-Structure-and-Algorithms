#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for(int i = 0; i<arr.length; i++)
    cout<<arr.A[i]<<" ";
}

void reverse(struct Array *arr)
{
    int i, j; 
    int *B;
    B = new int[arr->length];

    for(i = arr->length-1, j = 0; i>=0; i--,j++)
    B[j] = arr->A[i];

    for(i = 0; i<arr->length; i++)
    arr->A[i] = B[i];

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseSwap(struct Array *arr)
{
    int i,j;
    for(i = 0, j = arr->length-1; i<j; i++,j--)
    swap(arr->A[i],arr->A[j]);
}

int main()
{
    struct Array arr = {{2,4,6,8,10},10,5};
    Display(arr);
    reverse(&arr);
    cout<<"\n\n";
    Display(arr);
    reverseSwap(&arr);
    cout<<"\n\n";
    Display(arr);

    return 0;
}


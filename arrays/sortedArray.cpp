#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Display(struct Array arr)
{
    for(int i = 0; i<arr.length; i++)
    cout<<arr.A[i]<<" ";

    cout<<endl;
}

void InsertSort(struct Array *arr, int key)
{
    int i = arr->length-1;
    if(arr->length == arr->size)
    return ;

    while(arr->A[i]>key)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1]=key;
    arr->length++;
}

int isSorted(struct Array arr)
{
    for(int i = 0; i<arr.length-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return false;
    }
    return true;
}

void rearrange(struct Array *arr)
{
    int i = 0, j = arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j) swap(&arr->A[i],&arr->A[j]);
    }
}

int main()
{
    struct Array arr = {{-1,12,2,-4,5,6,-9,10},10,8};

    rearrange(&arr);

    Display(arr);

    return 0;
}

#include<iostream>
using namespace std;

struct Array
{
    int arr[10];
    int size;
    int length;
};

void Display(struct Array *arr)
{
    for(int i = 0; i<arr->length; i++)
    cout<<arr->arr[i];
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if(index>=0 && index <= arr->length-1)
    {
        x = arr->arr[index];
        for(int i = index; i<arr->length-1; i++)
        arr->arr[i] = arr->arr[i+1];
        arr->length--;
    }
    return x;
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

    cout<<"Before Deleting the element\n";
    Display(&arr);
    cout<<"\n Deteled Element is "<<Delete(&arr,2);
    cout<<"\nAfter Deleting the element\n";
    Display(&arr);
}

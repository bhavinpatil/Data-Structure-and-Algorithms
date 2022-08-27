#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int length;
};

int search(struct Array *arr, int l, int h, int key)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(key==arr->A[mid])
            return mid;
        else if(key<arr->A[mid])
            return search(arr,l,mid-1,key);
        else
            return search(arr,mid+1,h,key);
    }
    return -1;
}


int main()
{
    struct Array arr;
    arr.A = new int[10];
    arr.length = 10;

    cout<<"Enter the elements in array: ";
    for(int i = 0; i<arr.length-1; i++)
    cin>>arr.A[i];

    cout<<"Enter the element you want to search: ";
    int key;
    cin>>key;

    int pos = search(&arr, 0, arr.length-1, key);
    
    cout<<pos<<endl;

}
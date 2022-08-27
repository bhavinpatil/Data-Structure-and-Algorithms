#include <iostream>
using namespace std;


struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << " ";

    cout << "\n\nLength of Array is " << arr->length;
    cout << "\nSize of Array is " << arr->size;
}

void increseSize(struct Array *arr)
{
    int newSize = 0;
    cout << "\n\nEnter the new size of Array: ";
    cin >> arr->size;
}

void add(struct Array *arr)
{
    int e = 0;
    cout << "\n\nEnter the element to add: ";
    cin >> e;
    arr->A[arr->length] = e;
    arr->length++;
}

void insert(struct Array *arr)
{
    int index, ele;
    cout << "\n\nEnter the index where you want to add the element: ";
    cin >> index;
    cout << "\nEnter the element to add at " << index << " index ";
    cin >> ele;

    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = ele;
        arr->length++;
    }
}

void Delete(struct Array *arr)
{
    int index, x;
    cout<<"\n\nEnter the index of element you want to delete ";
    cin>>index;

    if(index >= 0 && index <= arr->length-1)
    {
        x = arr->A[index];
        for(int i = index; i<arr->length-1; i++)
        arr->A[i] = arr->A[i+1];
        arr->length--;
    }
}

int linearSearch(struct Array *arr, int s)
{
    for(int i = 0; i < arr->length; i++)
    {
        if(s == arr->A[i])
        return i;
    }
    return -1;
}


int main()
{
    struct Array arr;
    cout << "\nEnter the size of Array ";
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout << "\nEnter the length of array ";
    cin >> arr.length;

    cout << "\nEnter the array Elements: ";
    for (int i = 0; i < arr.length; i++)
        cin >> arr.A[i];

    display(&arr);
    increseSize(&arr);
    display(&arr);
    add(&arr);
    display(&arr);
    insert(&arr);
    display(&arr);
    Delete(&arr);
    display(&arr);
    cout<<"\nEnter the element to search: \n";
    int s;
    cin>>s;
    cout<<linearSearch(&arr,s);

    return 0;
}
#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *A;
    int size;
    int length;

public:
    Array()
    {
        A = new T[10];
        size = 10;
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        A = new T[size];
        length = 0;
    }
    ~Array()
    {
        delete[] A;
    }

    void insert(int index, T x);
    void display();
    T missingNumber();
    T missingNumber2();
};
template <class T>
void Array<T>::display()
{
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
}

template <class T>
void Array<T>::insert(int index, T x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

template <class T>
T Array<T>::missingNumber()
{
    int sum = 0;
    for (int i = 0; i < length - 1; i++)
        sum = sum + A[i];
    int s = length * (length + 1) / 2;
    return s - sum;
}

template <class T>
T Array<T>::missingNumber2()
{
    int l = A[0], h = A[length - 1];
    int diff = l - 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] - i != diff)
        {
            return i + diff;
            break;
        }
    }
}

int main()
{
    Array<int> arr;
    arr.insert(0, 11);
    arr.insert(1, 12);
    arr.insert(2, 13);
    arr.insert(3, 15);
    arr.insert(4, 16);
    arr.insert(5, 17);
    arr.insert(6, 18);
    arr.insert(7, 19);
    arr.display();
    cout << "\n"
         << arr.missingNumber2() << endl;

    return 0;
}
// CPP program to reverse array using pointers
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int array[], int array_size)
{
    int *pointer1 = array,

        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2)
    {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}
void print(int *array, int array_size)
{
    int *length = array + array_size, *position = array;
    for (position = array; position < length; position++)
        cout << *position << " ";
}
int main()
{
    int array[] = {2, 4, -6, 5, 8, -1};

    print(array, 6);
    cout << endl;
    reverse(array, 6);
    print(array, 6);
    return 0;
}

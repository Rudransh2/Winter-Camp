// Find the missing element from the array if first and last element are fixed.
#include <iostream>
using namespace std;

int MissingNo(int a[], int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total -= a[i];
    return total;
}

int main()
{
    int a[] = {1, 3, 5, 9};
    MissingNo(a, 4);
}

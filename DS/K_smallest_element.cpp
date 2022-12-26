// K smallest element using Brute Force and Heap and Heap sort

#include <bits/stdc++.h>
using namespace std;

int findkthsmallest(int array[], int n, int k)
{
    sort(array, array + n);
    return array[k - 1];
}
int main()
{
    int array[] = {50, 10, 75, 55, 45};
    int n = sizeof(array) / sizeof(array[0]), k = 2;
    cout << "K'th smallest element is " << findkthsmallest(array, n, k);
    return 0;
}

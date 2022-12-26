/* Program to print subarray with sum as given sum */
#include <bits/stdc++.h>
using namespace std;

bool FindSubarray(int array[], int n, int required_sum)
{
    int current_sum = array[0];
    int start = 0;
    for (int i = 1; i <= n; i++)
    {
        while (current_sum > required_sum && start < i - 1)
        {
            current_sum = current_sum - array[start];
            start++;
        }
        if (current_sum == required_sum)
        {
            return true;
        }
        if (i < n)
        {
            current_sum = current_sum + array[i];
        }
    }
    return false;
}
int main()
{
    int array[] = {10, 20, 30, 40};
    FindSubarray(array, 4, 30);
}

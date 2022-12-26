#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(10);
    minheap.push(1);
    minheap.push(0);
    minheap.push(8);
    minheap.push(7);
    minheap.push(2);

    for (int i = 0; i < 2; i++)
    {
        minheap.pop();
    }
    cout << "The third smallest element in the given array is: "
         << minheap.top() << endl;
    return 0;
}

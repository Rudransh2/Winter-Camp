/* Find frquency of elements greater to right of current element*/
#include <bits/stdc++.h> >
using namespace std;

void find(vector<int> const &arr)
{
    stack<int> s;

    for (int i : arr)
    {
        while (!s.empty() && s.top() < i)
        {
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        cout << s.pop() << " ";
        s.pop();
    }
}

int main()
{
    vector<int> arr = {7, 12, 6, 4, 1, 6};

    find(arr);

    return 0;
}

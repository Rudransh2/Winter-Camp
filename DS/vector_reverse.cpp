// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	vector<int> vec = {10, 20, 30};
// 	for (int i = 0; i < vec.size(); i++) {
// 		cout << vec.at(i) << " ";
// 	}
// 	cout << endl;
// 	vec.pop_back();
// 	for (int i = 0; i < vec.size(); i++) {
// 		cout << vec.at(i) << " ";
// 	}
// 	cout << endl;
// 	vec.push_back(30);
// 	for (int i = 0; i < vec.size(); i++) {
// 		cout << vec.at(i) << " ";
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;

	reverse(a.begin(), a.end());

	cout << "Reversed Vector: ";
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	vector<int> a = {10, 20, 30};

	reverse_array(a);
}

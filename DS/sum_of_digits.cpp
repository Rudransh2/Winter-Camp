// Code for Sum of digits using recursion
#include <bits/stdc++.h>
using namespace std;

int sum_of_number(int number) {
	if (number == 0)
		return 0;
	return (number % 10 + sum_of_number(number / 10));
}

int main() {
	int number = 12345;
	int result = sum_of_number(number);
	cout << "Sum of digits in " << number << " is " << result << endl;
	return 0;
}

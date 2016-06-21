#include<iostream>
using namespace std;
/*
 * Rewrite the exercise from 1.11
 */

int main() {
	int num1, num2;
	cout << "Please input two integers seperated by space: ";
	cin >> num1 >> num2;
	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for(int i = num1; i <= num2; i++) {
		cout << i << " ";
	}
	return 0;
}
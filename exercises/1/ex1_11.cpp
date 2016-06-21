#include<iostream>
using namespace std;

void print_all(int lo, int hi) {
	if(lo > hi) {
		int temp = lo;
		lo = hi;
		hi = temp;
	}
	while(lo <= hi) {
		cout << lo++ << " ";
	}
}

int main() {
	int num1, num2;
	cout << "Please input two integers seperated by space: ";
	cin >> num1 >> num2;
	print_all(num1, num2);
	return 0;
}
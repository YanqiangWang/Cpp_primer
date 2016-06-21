#include<iostream>
using namespace std;
/*
 * This program is copied from ex1_9.cpp,
 * It can handle input in which the first number
 * is small than the second.
 */

void print_all(int hi, int lo) {
	while(hi > lo) {
		cout << hi--;
		if (hi != lo)
			cout << " ";
	}
	cout << endl;
}

int main() {
	print_all(10, 0 - 1);
	return 0;
}
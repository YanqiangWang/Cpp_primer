#include<iostream>
using namespace std;
/*
 * Rewrite the exercise from 1.9
 */

int main() {
	int sum = 0;
	for (int i = 50; i != 100 + 1; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
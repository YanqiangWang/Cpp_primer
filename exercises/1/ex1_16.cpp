#include<iostream>
using namespace std;

int main() {
	int sum = 0, num = 0;
	while(cin >> num) {
		sum += num;
	}
	cout << sum;
	return 0;
}
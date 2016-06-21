#include<iostream>
using namespace std;

int sum(int lo, int hi) {
	int sum = 0;
	while(lo < hi)
		sum += lo++;
	return sum;
}

int main() {
	cout << "The sum is: " << sum(50, 100 + 1) << endl;
	return 0;
}
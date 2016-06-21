#include<iostream>
using namespace std;

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
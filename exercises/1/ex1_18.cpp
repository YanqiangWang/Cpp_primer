#include<iostream>
using namespace std;
/*
 * This program was copied from sample code occur.cc
 */

int main() {
	int currVal = 0, val = 0;
	if (cin >> currVal) {
		int cnt = 1;
		while(cin >> val) {
			if (currVal == val)
				++cnt;
			else {
				cout << currVal << " occur " << cnt << " times" << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << " occur " << cnt << " times" << endl;
	}
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v = {1, 2, 4, 8};
	for(auto each : v)
		cout << each << " ";
	cout << endl;
	fill_n(v.begin(), v.size(), 0);
	for(auto each : v)
		cout << each << " ";
	cout << endl;
	return 0;
}
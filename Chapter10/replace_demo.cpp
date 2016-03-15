#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	vector<int> v = {0, 1, 2, 3, 4, 5};
	replace(v.begin(), v.end(), 0, 42);
	for (auto i : v)
		cout << i << " ";
	cout << endl;
	vector<int> v_cp;
	replace_copy(v.cbegin(), v.cend(), back_inserter(v_cp), 2, 33);
	for (auto i : v)
		cout << i << " ";
	cout << endl;
	for (auto i : v_cp)
		cout << i << " ";
	cout << endl;
	return 0;
}
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
	vector<double> v = {1.2, 1.3, 1.4};
	cout << accumulate(v.cbegin(), v.cend(), 0) << endl;
	cout << accumulate(v.cbegin(), v.cend(), 0.0) << endl;
	return 0;
}
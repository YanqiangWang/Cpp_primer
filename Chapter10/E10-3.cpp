#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main() {
	vector<int> v = {1, 2, 3, 4, 5};
	cout << "The sum is " << accumulate(v.cbegin(), v.cend(), 0) << endl;
	return 0;
}
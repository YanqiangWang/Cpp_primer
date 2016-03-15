#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5};
	int val;
	cout << "Please enter a number: ";
	cin >> val;
	auto result = find(v.cbegin(), v.cend(), val);
	cout << "The result " << val 
		 << (result == v.cend() ? " is not present." : " is present.") << endl;
	return 0;
}
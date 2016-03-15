#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 5, 5, 6};
	cout << count(v.cbegin(), v.cend(), 5) << endl;
	return 0;
}
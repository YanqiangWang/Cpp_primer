#include <iostream>
#include <vector>
using namespace std;

bool is_equal(vector<int>&, vector<int>&);

int main()
{
	vector<int> ivec1, ivec2;
	ivec1 = {0, 1, 1, 2};
	ivec2 = {0, 1, 1, 2, 3, 5, 8};
	// print 1, type promoted
	cout << is_equal(ivec1, ivec2) << endl;
	return 0;
}

bool is_equal(vector<int>& ivec1, vector<int>& ivec2)
{
	if (ivec1.size() <= ivec2.size()) {
		auto ptr1 = ivec1.begin();
		auto ptr2 = ivec2.begin();
		while (*ptr1 == *ptr2) {
			 ++ptr1;
			 ++ptr2;
		}
		if (ptr1 != ivec1.end())
			return false;
		else 
			return true;
	}
}
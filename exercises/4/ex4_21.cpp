#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	// initialize the vector
	for (int i = 0; i < 10; ++i)
		ivec.push_back(i);
	// change the odd number to even
	for (auto p = ivec.begin(); p < ivec.end(); ++p)
		if (*p % 2 != 0)
			*p *= 2;
	// print numbers in vector
	for (int& i : ivec)
		cout << i << " ";
	return 0;
}
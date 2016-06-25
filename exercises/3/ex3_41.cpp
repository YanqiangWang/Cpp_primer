#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
	int num[] = {0, 2, 4, 6};
	vector<int> ivec(begin(num), end(num));
	
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}
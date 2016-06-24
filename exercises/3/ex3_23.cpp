#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num;
	for (int i = 0; i < 10; ++i)
		num.push_back(i);
	
	for (auto i = num.begin(); i != num.end(); ++i)
		*i *= 2;
	
	for (auto i = num.begin(); i != num.end(); ++i)
		cout << *i << " ";
	
	return 0;
}
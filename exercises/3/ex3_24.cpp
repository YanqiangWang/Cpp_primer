#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num;
	int temp;
	while(cin >> temp)
		num.push_back(temp);
	
	for (auto i = num.cbegin(); i != num.cend() - 1; ++i)
		cout << *i + *(i + 1) << " ";
	cout << endl;
	
	for (auto i = num.cbegin(); i != num.cbegin() + num.size() / 2; ++i)
		cout << *i + *(num.cend() - (i - num.cbegin()) - 1) << " ";
	cout << endl;
	return 0;
}
#include <vector>
#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
	vector<int> num;
	for (int i = 0; i < 10; i++)
		num.push_back(i);
	
	int array[num.size()];
	
	auto p = num.cbegin();
	for (int i = 0; i < num.size(); ++i) {
		array[i] = *(p + i);
		cout << array[i] << " ";
	}
	return 0;
}
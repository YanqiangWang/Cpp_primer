#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
	constexpr size_t size = 10;
	int num[size] = {};
	
	for (int i = 0; i < size; ++i) {
		num[i] = i;
		cout << num[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < size; ++i) {
		*(num + i) = 0;
		cout << num[i] << " ";
	}
	cout << endl;
	
	return 0;
}
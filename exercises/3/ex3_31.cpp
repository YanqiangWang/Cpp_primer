#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
	constexpr size_t size = 10;
	int array[size] = {};
	for (int i = 0; i < size; ++i) {
		array[i] = i;
		cout << array[i] << " ";
	}
	return 0;
}
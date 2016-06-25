#include <iostream>
#include <cstddef>
#include <vector>
using namespace std;

int main()
{
	constexpr size_t array_size = 10;
	int array[array_size] = {};
	int array2[array_size] = {};
	
	for (int i = 0; i < array_size; ++i)
		array[i] = i;
	
	for (int i = 0; i < array_size; ++i)
		array2[i] = array[i];
	
	vector<int> ivec;
	for (int i = 0; i < array_size; ++i)
		ivec.push_back(i);
	vector<int> ivec2(ivec);
	
	return 0;
}
#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

bool compare(int*, int*, int);

int main()
{
	constexpr size_t size = 10;
	int num[size] = {};
	int num2[size] = {};
	
	for (int i = 0; i < size; ++i) {
		num[i] = i;
		num2[i] = i;
	}
	
	bool value = compare(num, num2, size);
	
	vector<int> ivec, ivec2;
	ivec.push_back(10);
	ivec2.push_back(11);
	bool value2 = (ivec == ivec2);
	
	return 0;
}

bool compare(int* num, int* num2, int size)
{
	for (int i = 0; i < size; ++i) {
		if (num[i] != num2[i])
			return false;
	}
	return true;
}
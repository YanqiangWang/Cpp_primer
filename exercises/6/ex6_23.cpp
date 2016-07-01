#include <iostream>
#include <cstddef>
using namespace std;

void print(const int *pi)
{
	if(pi)
		cout << *pi << endl;
}

void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size; ++i)
		cout << ia[i] << " ";
	cout << endl;
}

void print(int (&arr)[2])
{
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

int main()
{
	int i = 0, j[2] = {0, 1};
	print(&i);
	print(j, end(j) - begin(j));
	print(j);
	return 0;
}
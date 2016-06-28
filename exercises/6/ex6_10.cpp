#include <iostream>
using namespace std;

void swap(int*, int*);

int main()
{
	int i, j;
	cin >> i >> j;
	swap(&i, &j);
	cout << i << " " << j << endl;
	return 0;
}

void swap(int* ptr1, int* ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
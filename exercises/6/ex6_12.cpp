#include <iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	int i, j;
	cin >> i >> j;
	swap(i, j);
	cout << i << " " << j << endl;
	return 0;
}

void swap(int& num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
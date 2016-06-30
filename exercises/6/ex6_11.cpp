#include <iostream>
using namespace std;

void reset(int& num, const int num2)
{
	num = num2;
}

int main()
{
	int i;
	cin >> i;
	reset(i, 10);
	cout << i << endl;
	return 0;
}
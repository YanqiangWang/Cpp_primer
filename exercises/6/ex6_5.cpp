#include <iostream>
using namespace std;

int my_abs(int num)
{
	if (num < 0)
		num = -1 * num;
	return num;
}

int main()
{
	int n;
	cin >> n;
	cout << my_abs(n) << endl;
	return 0;
}
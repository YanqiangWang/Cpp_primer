#include <iostream>
using namespace std;

int fact(int n) {
	int result = n;
	if (n == 0)
		return 1;
	while(--n) {
		result *= n;
	}
	return result;
}

int main()
{
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	if (n >= 0)
		cout << n << "! is " << fact(n) << endl;
	return 0;
}
#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 0)
		cout << n << "! is " << fact(n) << endl;
	return 0;
}
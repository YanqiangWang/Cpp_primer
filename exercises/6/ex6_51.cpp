#include <iostream>
using namespace std;

void f()
{
	cout << "no parameters" << endl;
}

void f(int i)
{
	cout << "parameter type: int" << endl;
}

void f(int i, int j)
{
	cout << "parameter type: int, int" << endl;
}

void f(double d, double d2 = 3.14)
{
	cout << "parameter type: double, double = 3.14" << endl;
}

int main()
{
	// f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}
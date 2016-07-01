#include <iostream>
#include <vector>
using namespace std;
using item = int (*) (int, int);

int item_add(int num1, int num2)
{
	return num1 + num2;
}

int item_sub(int num1, int num2)
{
	return num1 - num2;
}

int item_mult(int num1, int num2)
{
	return num1 * num2;
}

int item_div(int num1, int num2)
{
	return num1 / num2;
}

int main()
{
	vector<item> pvec;
	pvec = {item_add, item_sub, item_mult, item_div};
	for (auto func : pvec) {
		cout << func(8, 4) << endl;
	}
	return 0;
}
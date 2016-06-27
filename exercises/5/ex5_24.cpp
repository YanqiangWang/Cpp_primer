#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0)
		throw runtime_error("divisor is 0");
	cout << num1 / num2;
	return 0;
}

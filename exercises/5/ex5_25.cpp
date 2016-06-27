#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	for (int num1, num2; cout << "Enter two numbers: ", cin >> num1 >> num2; ) {
		try {
			if (num2 == 0)
				throw runtime_error("divisor can't be 0.");
			cout << num1 / num2 << endl;
		} catch (runtime_error err) {
			cout << err.what() << endl;
			cout << "Continue? Enter y or n: " << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			else
				continue;
		}
	}
	return 0;
}

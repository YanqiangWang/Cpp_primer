#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	try {
		if (num2 == 0)
		 throw runtime_error("error!");
	cout << num1 / num2;
	} catch (runtime_error err) {
		cout << err.what() << endl;
		char c;
		cin >> c;
		if (!cin || c == 'n')
			cout << "over";
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string temp;
	string result;
	if(cin >> temp) {
		result = temp;
		while(cin >> temp) {
			result += " " + temp;
		}
		cout << result;
	}
	return 0;
}
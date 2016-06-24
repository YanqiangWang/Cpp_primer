#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	// read one line
	getline(cin, s1);
	cout << s1 << endl;
	
	// read one word
	while(cin >> s1) {
		cout << s1 << endl;
	}
	return 0;
}
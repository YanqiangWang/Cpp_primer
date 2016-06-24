#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << "They are the same." << endl;
	else {
		cout << "The larger one is: ";
		if (s1 > s2)
			cout << s1 << endl;
		else
			cout << s2 << endl;
		cout << "The longer one is: ";
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}
	return 0;
}
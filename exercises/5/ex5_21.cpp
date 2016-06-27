#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1;
	while(cin >> s2) {
		if (s1 == s2)
			break;
		else {
			s1 = s2;
			s2 = "";
		}
	}
	if (s1 == s2 && *(s1.begin()) <= 'Z' && *(s1.begin()) >= 'A') {
		cout << s1 << endl;
	}else
		cout << "no words repeated." << endl;
	return 0;
}

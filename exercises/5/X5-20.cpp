#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	while(cin >> s1) {
		if (s1 != s2)
			s2 = s1;
		else
			break;
	}
	cout << s1;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	while(cin >> s1) {
		if (s1 != s2)
			s2 = s1;
		else if(s1[0] <= 'Z' && s1[0] >= 'A'){
			cout << s1;
			break;
		}
	}
	return 0;
}

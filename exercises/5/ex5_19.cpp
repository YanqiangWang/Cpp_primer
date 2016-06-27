#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	char c;
	do {
		cout << "Please enter two words: " << endl;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
		cout << "Continue? Enter y or n: " << endl;
		cin >> c;
	} while (c == 'y');
	return 0;
}
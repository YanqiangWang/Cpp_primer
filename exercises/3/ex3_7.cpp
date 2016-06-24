#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (char c : s)
		c = 'X';
	cout << s;
	return 0;
}
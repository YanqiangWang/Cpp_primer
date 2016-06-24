#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int i = 0;
	while (i < s.size()) {
		s[i] = 'X';
		++i;
	}
	
	for (int j = 0; j < s.size(); j++)
		s[j] = 'X';
	
	cout << s;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, result;
	cin >> s;
	
	for (char c : s) {
		if (!ispunct(c))
			result += c;
	}
	cout << result;
	return 0;
}
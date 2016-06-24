#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> s;
	string temp;
	while(cin >> temp) {
		for (char& c : temp)
			c = toupper(c);
		s.push_back(temp);
	}
	for (string& i : s)
		cout << i << endl;
	return 0;
}
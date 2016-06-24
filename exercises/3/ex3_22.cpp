#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<string> text;
	for (string line; getline(cin, line); text.push_back(line));
	
	for (auto& word : text) {
		for (auto& ch : word)
			if (isalpha(ch))
				ch = toupper(ch);
		cout << word << " ";
	}
	return 0;
}
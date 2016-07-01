#include <string>
#include <iostream>
using namespace std;

bool has_upper(const string& s)
{
	for (auto c : s) {
		if (isupper(c))
			return true;
	}
	return false;
}

void to_lower(string& s)
{
	for (auto& c : s) {
		c = tolower(c);
	}
}

int main()
{
	string s = "I am a student.";
	cout << "Has upper character: " << (has_upper(s) ? "Yes" : "No") << endl;
	to_lower(s);
	cout << s << endl;
	return 0;
}
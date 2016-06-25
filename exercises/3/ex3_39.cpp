#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "hello";
	string s2 = "world";
	if (s1 != s2)
		cout << "s1 != s2" << endl;
	
	char s3[10] = "hello";
	char s4[10] = "world";
	// if s3 == s4, return 0
	cout << strcmp(s3, s4) << endl;
	
	return 0;
}

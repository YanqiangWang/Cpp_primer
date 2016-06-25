#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char s[10] = "hello, ";
	char s2[10] = "world.";
	char s3[20] = {};
	
	strcpy(s3, s);
	strcat(s3, s2);
	for (int i = 0; i < strlen(s3); ++i)
		cout << *(s3 + i);
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> lines;
	string temp_str;
	int aCnt = 0;
	int eCnt = 0;
	int iCnt = 0;
	int oCnt = 0;
	int uCnt = 0;
	
	while (cin >> temp_str)
		lines.push_back(temp_str);
	for (auto& str : lines)
		for (char c : str) {
			if (c == 'a')
				++aCnt;
			if (c == 'e')
				++eCnt;
			if (c == 'i')
				++iCnt;
			if (c == 'o')
				++oCnt;
			if (c == 'u')
				++uCnt;
		}
	
	cout << "Number of vowel a: " << aCnt << endl;
	cout << "Number of vowel e: " << eCnt << endl;
	cout << "Number of vowel i: " << iCnt << endl;
	cout << "Number of vowel o: " << oCnt << endl;
	cout << "Number of vowel u: " << uCnt << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int aCnt, eCnt, iCnt, oCnt, uCnt;
	int spaceCnt, newlineCnt, tabCnt;
	aCnt = eCnt = iCnt = oCnt = uCnt = 0;
	spaceCnt = tabCnt = newlineCnt = 0;
	char c;
	while (cin >> noskipws >> c)
		switch (c)
			{
			case 'A':
			case 'a':
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++newlineCnt;
				break;
			default:
				break;
			}

	cout << "Number of vowel a: " << aCnt << endl;
	cout << "Number of vowel e: " << eCnt << endl;
	cout << "Number of vowel i: " << iCnt << endl;
	cout << "Number of vowel o: " << oCnt << endl;
	cout << "Number of vowel u: " << uCnt << endl;
	cout << "Number of space: " << spaceCnt << endl;
	cout << "Number of tab: " << tabCnt << endl;
	cout << "Number of newline: " << newlineCnt << endl;
	return 0;
}
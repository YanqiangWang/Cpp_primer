#include <iostream>
using namespace std;

int main()
{
	int aCnt, eCnt, iCnt, oCnt, uCnt;
	aCnt = eCnt = iCnt = oCnt = uCnt = 0;
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
			default:
				break;
			}

	cout << "Number of vowel a: " << aCnt << endl;
	cout << "Number of vowel e: " << eCnt << endl;
	cout << "Number of vowel i: " << iCnt << endl;
	cout << "Number of vowel o: " << oCnt << endl;
	cout << "Number of vowel u: " << uCnt << endl;
	return 0;
}
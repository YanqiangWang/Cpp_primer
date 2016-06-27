#include <iostream>
using namespace std;

int main() {
	char c;
	int ff = 0, fl = 0, fi = 0;
	while(cin >> skipws >> c) {
		if (c == 'f') {
			cin >> skipws >> c;
			switch (c) {
			case 'f':
				++ff; continue;
			case 'l':
				++fl; break;
			case 'i':
				++fi; break;
			default: break;
			}
		}
	}
	cout << "The number of ff: " << ff << endl;
	cout << "The number of fl: " << fl << endl;
	cout << "The number of fi: " << fi << endl;
	return 0;
}
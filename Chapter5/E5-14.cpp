#include<iostream>
#include<string>
using namespace std;

int main() {
	int count = 1, max = 1;
	string last_word, reccent_word;
	while(cin >> reccent_word) {
		if (reccent_word == last_word)
			count++;
		else {
			last_word = reccent_word;
			if (count > max)
				max = count;
			count = 1;
		}
	}
	if(max > 1)
		cout << max;
	else
		cout << "no exist";
	return 0;
}

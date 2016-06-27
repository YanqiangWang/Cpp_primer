#include<iostream>
#include<string>
using namespace std;

int main() {
	int count = 1, max = 1;
	string last_word, reccent_word, max_word;
	while(cin >> reccent_word) {
		if (reccent_word == last_word)
			count++;
		else {
			if (count > max) {
				max = count;
				max_word = last_word;
			}
			last_word = reccent_word;
			count = 1;
		}
	}
	if(max > 1)
		cout << max_word << " occured " << max << " times.";
	else
		cout << "no exist";
	return 0;
}

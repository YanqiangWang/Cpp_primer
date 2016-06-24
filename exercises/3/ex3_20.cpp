#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int num;
	while(cin >> num) {
		ivec.push_back(num);
	}
	for (int i = 0; i < ivec.size() - 1; i++) {
		cout << ivec[i] + ivec[i + 1] << " ";
	}
	cout << endl;
	for (int i = 0; i < ivec.size() / 2; i++) {
		cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
	}
	return 0;
}
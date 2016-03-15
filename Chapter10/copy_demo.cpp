#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a1[] = {0, 1, 2, 3, 4, 5, 6};
	int a2[sizeof(a1)/sizeof(*a1)];
	copy(begin(a1), end(a1), a2);
	for (auto temp : a2)
		cout << temp << " ";
	cout << endl;
	return 0;
}
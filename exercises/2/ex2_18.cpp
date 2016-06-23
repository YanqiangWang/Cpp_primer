#include<iostream>
using namespace std;

int main() {
	int i = 0, j = 1, *p = &i, *p2 = &j;
	cout << "i = " << i << " j = " << j 
		 << " p = " << p << " p2 = " << p2 << endl;
	p2 = p;
	*p = 3;
	cout << "i = " << i << " p2 = " << p2 << endl;
	return 0;
}
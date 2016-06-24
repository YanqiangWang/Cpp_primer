#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	
	// print i means int, PKi means pointer to const int
	cout << "j: " << typeid(j).name() << endl
		 << "k: " << typeid(k).name() << endl
		 << "p: " << typeid(p).name() << endl
		 << "j2: " << typeid(j2).name() << endl
		 << "k2: " << typeid(k2).name() << endl;
	return 0;
}
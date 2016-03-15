#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

int main(){
	list<string> s = {"Tom", "Bill", "Bill", "Steve"};
	cout << count(s.cbegin(), s.cend(), "Bill") << endl;
	return 0;
}
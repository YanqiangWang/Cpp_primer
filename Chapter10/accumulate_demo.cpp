#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

int main() {
	vector<string> v = {"Tom ", "is ", "a " "good ", "boy."};
	cout << accumulate(v.cbegin(), v.cend(), string("I think "));
	return 0;
}
#include<iostream>
#include<numeric>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<string> v1 = {"Tom ", "is ", "a ", "good ", "boy."};
	vector<string> v2(v1);
	vector<string> v3 = {"Tom ", "is ", "a ", "good ", "kid."};
	cout << equal(v1.cbegin(), v1.cend(), v2.cbegin()) << endl;
	cout << equal(v1.cbegin(), v1.cend(), v3.cbegin()) << endl;
	return 0;
}
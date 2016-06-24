#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_value(vector<int>& v)
{
	for (int i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> v1; // size: 0, no values
	vector<int> v2(10); // size: 10, value: 0
	vector<int> v3(10, 42); // size: 10, value: 42
	vector<int> v4{10}; // size: 1, value: 10
	vector<int> v5{10, 42}; // size: 2, value: 10, 42
	vector<int> v6{10}; // size: 10, value: ""
	vector<string> v7{10, "hi"}; // size: 10, value: "hi"
	
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	print_value(v2);
	cout << "v3 size: " << v3.size() << endl;
	print_value(v3);
	cout << "v4 size: " << v4.size() << endl;
	print_value(v4);
	cout << "v5 size: " << v3.size() << endl;
	print_value(v5);
	cout << "v6 size: " << v3.size() << endl;
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;
	cout << "v7 size: " << v3.size() << endl;
	for (string i : v7)
		cout << i << " ";
	cout << endl;
	return 0;
}
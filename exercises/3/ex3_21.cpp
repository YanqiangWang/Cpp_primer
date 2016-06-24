#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_value(vector<T>& v)
{
	for (auto it = v.cbegin(); it != v.cend(); ++it)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	vector<int> v1; // size: 0, no values
	vector<int> v2(10); // size: 10, value: 0
	vector<int> v3(10, 42); // size: 10, value: 42
	vector<int> v4{10}; // size: 1, value: 10
	vector<int> v5{10, 42}; // size: 2, value: 10, 42
	vector<string> v6{10}; // size: 10, value: ""
	vector<string> v7{10, "hi"}; // size: 10, value: "hi"
	
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	print_value(v2);
	cout << "v3 size: " << v3.size() << endl;
	print_value(v3);
	cout << "v4 size: " << v4.size() << endl;
	print_value(v4);
	cout << "v5 size: " << v5.size() << endl;
	print_value(v5);
	cout << "v6 size: " << v6.size() << endl;
	print_value(v6);
	cout << "v7 size: " << v7.size() << endl;
	print_value(v7);
	
	return 0;
}
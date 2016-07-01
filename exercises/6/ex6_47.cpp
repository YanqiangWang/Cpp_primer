#include <vector>
#include <iostream>
using namespace std;

// #define NDEBUG

void print(vector<int> &vec)
{
#ifdef NDEBUG
	cout << "vector size: " << vec.size() << endl;
#endif
	if (!vec.empty()) {
		auto tmp = vec.back();
		vec.pop_back();
		print(vec);
		cout << tmp << " ";
	}
}

int main()
{
	vector<int> vec {1, 2, 3, 4, 5, 6};
	print(vec);
	return 0;
}
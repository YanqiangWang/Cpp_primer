#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> scores(11, 0);
	unsigned grade;
	auto i = scores.begin();
	while (cin >> grade)
		if (grade <= 100)
			++(*(i + grade / 10));
	
	for (; i < scores.end(); ++i)
		cout << *i << " ";
	return 0;
}
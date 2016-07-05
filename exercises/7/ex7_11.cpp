#include <iostream>
#include <vector>
#include "ex7_11.h"
using namespace std;

int main()
{
	vector<Sales_data> svec = {{}, {"CLRS"}, {"CSAPP", 2, 49.9}, {cin}};
	for (Sales_data &sd : svec) {
		print(cout, sd) << endl;
	}
	return 0;
}
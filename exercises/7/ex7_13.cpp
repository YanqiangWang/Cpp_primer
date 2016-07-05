#include <iostream>
#include "ex7_21.h"
using namespace std;

int main()
{
	Sales_data total(cin);
	if (!total.isbn().empty()) {
		Sales_data trans;
		while (cin) {
			Sales_data trans(cin);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		if (!total.isbn().empty())
			print(cout, total) << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
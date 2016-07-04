#include <iostream>
#include "ex7_6.h"
using namespace std;

int main()
{
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		print(cout, total) << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
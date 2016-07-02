#include <iostream>
#include "ex7_2.h"
using namespace std;

int main()
{
	Sales_data total;
	double price;
	if (cin >> total.bookNo >> total.units_sold >> price) {
		total.revenue = total.units_sold * price;
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> price) {
			trans.revenue = trans.units_sold * price;
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				cout << total.bookNo << " " << total.units_sold << " "
					 << total.revenue << endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " "
			 << total.revenue << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
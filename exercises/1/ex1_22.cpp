#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item total;
	if (cin >> total) {
		Sales_item book;
		while (cin >> book) {
			if (total.isbn() == book.isbn())
				total += book;
			else {
				cout << total << endl;
				total = book;
			}
		}
		cout << total << endl;
	} else {
		cerr << "No data?!" << endl;
	}
	return 0;
}
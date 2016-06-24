#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

/*
 * Exercise 2.42 -> 1.22, 1.23
 */

void print_info(string&, unsigned, double);

int main()
{
	Sales_data currData, data;
	double price = 0.0;
	if (cin >> currData.bookNo) {
		// read other info of currData
		cin >> currData.units_sold >> price;
		currData.revenue = currData.units_sold * price;
		// initialize total count and revenue
		unsigned totalCnt = currData.units_sold;
		double totalRevenue = currData.revenue;
		// read next book's info
		while (cin >> data.bookNo) {
			cin >> data.units_sold >> price;
			data.revenue = data.units_sold * price;
			if (currData.bookNo == data.bookNo) {
				// if bookNo is the same
				// add to total count and revenue
				totalCnt += data.units_sold;
				totalRevenue += data.revenue;
			} else {
				// print info of former book
				print_info(currData.bookNo, totalCnt, totalRevenue);
				// reset some info
				currData.bookNo = data.bookNo;
				totalCnt = currData.units_sold = data.units_sold;
				totalRevenue = currData.revenue = data.revenue;
			}
		}
		// print info of last book
		print_info(currData.bookNo, totalCnt, totalRevenue);
	}
	return 0;
}

void print_info(string& bookNo, unsigned cnt, double revenue) {
	cout << bookNo << " " << cnt
		 << " " << revenue << " ";
	if (cnt != 0)
		cout << revenue / cnt << endl;
	else
		cout << "(no sales)" << endl;
}
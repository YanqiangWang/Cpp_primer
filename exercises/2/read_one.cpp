#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

/*
 * Exercise 2.42 -> 1.20
 */

int main()
{
	Sales_data data;
	double price;
	cin >> data.bookNo >> data.units_sold >> price;
	data.revenue = data.units_sold * price;
	cout << data.bookNo << " " << data.units_sold << " " 
		 << data.revenue << " " << price << endl;
	return 0;
}
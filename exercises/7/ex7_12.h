#ifndef CP5_ex7_12_h
#define CP5_ex7_12_h

#include <string>
#include <iostream>
struct Sales_data;
std::istream &read(std::istream &, Sales_data&);

struct Sales_data {
	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p):
				bookNo(s), units_sold(n), revenue(p * n) {}
	
	Sales_data(std::istream &is) {
		read(is, *this);
	}
	
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream &read(std::istream &is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

#endif
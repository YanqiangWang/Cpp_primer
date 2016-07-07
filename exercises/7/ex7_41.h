#ifndef CP5_ex7_41_h
#define CP5_ex7_41_h

#include <string>
#include <iostream>

class Sales_data {
	friend std::istream &read(std::istream &, Sales_data&);
public:
	Sales_data(): Sales_data("", 0, 0) {}
	Sales_data(const std::string &s): Sales_data(s, 0, 0) {}
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p * n) {}
	Sales_data(std::istream &is): Sales_data() {
		read(is, *this);
	}

private:
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
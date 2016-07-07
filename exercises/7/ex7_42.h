#ifndef CP5_ex7_42_h
#define CP5_ex7_42_h

#include <iostream>

class Date {
public:
	Date(int year): Date(year, 1, 1) {}
	Date(int year, int month): Date(year, month, 1) {}
	Date(int year, int month, int day): year_(year), month_(month), day_(day) {}
	explicit Date(std::istream &in) {
		in >> year_ >> month_ >> day_;
	}
private:
	int year_;
	int month_;
	int day_;
};

#endif
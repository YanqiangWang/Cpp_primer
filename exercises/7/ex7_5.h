#ifndef PERSON_H
#define PERSON_H
#include <string>

struct Person {
	// it should be constant
	std::string get_name() const {
		return name;
	}
	
	std::string get_address() const {
		return address;
	}
	
	std::string name;
	std::string address;
};

#endif
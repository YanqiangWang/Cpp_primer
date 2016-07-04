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

std::istream &read(std::istream &is, Person &person)
{
	return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	return os << person.name << " " << person.address;
}

#endif
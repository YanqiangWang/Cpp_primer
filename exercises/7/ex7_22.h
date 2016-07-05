#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream &, Person &);

struct Person {
public:
	Person() = default;
	Person(std::string n, std::string a):name(n), address(a) {}
	Person(std::istream &) {
		read(std::cin, *this);
	}
	
	std::string get_name() const {
		return name;
	}
	
	std::string get_address() const {
		return address;
	}
	
private:
	std::string name;
	std::string address;
	
	friend std::istream &read(std::istream &, Person &);
	friend std::ostream &print(std::ostream &, const Person &);
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
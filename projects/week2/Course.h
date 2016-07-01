#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

struct Course {
	int course_ID;
	std::string course_name;
};

using course_type = std::vector<Course>;
using std::cout; using std::endl;

void print_course(course_type&);
void longest_name(course_type&);
void delete_course(course_type&);

inline void help_info()
{
	cout << 0 << "\t show help info" << endl;
	cout << 1 << "\t print course IDs and names" << endl;
	cout << 2 << "\t print the amount of courses" << endl;
	cout << 3 << "\t print longest course name" << endl;
	cout << 4 << "\t delete last course" << endl;
	cout << 5 << "\t exit" << endl;
}

#endif
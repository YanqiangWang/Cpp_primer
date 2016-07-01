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

void print_course(course_type&);
void longest_name(course_type&);
void delete_course(course_type&);

inline void help_info()
{
	std::cout << 0 << "\t show help info" << std::endl;
	std::cout << 1 << "\t print course IDs and names" << std::endl;
	std::cout << 2 << "\t print the amount of courses" << std::endl;
	std::cout << 3 << "\t print longest course name" << std::endl;
	std::cout << 4 << "\t delete last course" << std::endl;
	std::cout << 5 << "\t exit" << std::endl;
}

#endif
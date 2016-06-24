#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
using namespace std;
using course_type = vector<Course>;

void help_info();
void print_course(course_type&);
void longest_name(course_type&);
void delete_course(course_type&);

int main()
{
	// add course to the list
	course_type course;
	vector<string> s = {"Linux", "C++", "HTML", "NodeJS", "Shell", "Python"};
	for (int i = 0; i < s.size(); ++i) {
		Course c;
		c.course_ID = 101 + i;
		auto itr = s.cbegin();
		c.course_name = *(itr + i);
		course.push_back(c);
	}
	
	// circular input
	int ins;
	help_info();
	while (cin >> ins) {
		switch(ins) {
			case 0: help_info(); break;
			case 1: print_course(course); break;
			case 2: cout << "In total: " << course.size() << endl; break;
			case 3: longest_name(course); break;
			case 4: delete_course(course); break;
			case 5: return 0;
			default: break;
		}
	}
	return 0;
}

void delete_course(course_type& course)
{
	if(!course.empty()){
		cout << (*(course.end() - 1)).course_name;
		course.pop_back();
		cout << " has been deleted!" << endl;
	} else {
		cerr << "invalid operation: course list is empty!" << endl;
	}
}

void longest_name(course_type& course)
{
	cout << "the course(s) with the longest name: " << endl;
	int max_length = 0;
	// get the max length of course names
	for (auto i : course)
		if (i.course_name.size() > max_length)
			max_length = i.course_name.size();
	
	// print courses with the longest name
	for (auto i : course)
		if (i.course_name.size() == max_length)
			cout << i.course_ID << " " << i.course_name << endl;
}

void print_course(course_type& course)
{
	cout << "course IDs and names:" << endl;
	for (auto i : course)
		cout << i.course_ID << " " << i.course_name << endl;
}

void help_info()
{
	cout << 0 << "\t show help info" << endl;
	cout << 1 << "\t print course IDs and names" << endl;
	cout << 2 << "\t print the amount of courses" << endl;
	cout << 3 << "\t print longest course name" << endl;
	cout << 4 << "\t delete last course" << endl;
	cout << 5 << "\t exit" << endl;
}
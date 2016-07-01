#include <stdexcept>
#include "Course.h"
using namespace std;

int main()
{
	// add courses to the list
	course_type course;
	vector<string> s = {"Linux", "C++", "HTML", "NodeJS", "Shell", "Python"};
	for (int i = 0; i < s.size(); ++i) {
		Course c;
		c.course_ID = 101 + i;
		auto itr = s.cbegin();
		c.course_name = *(itr + i);
		course.push_back(c);
	}

	// circularly input
	int ins;
	help_info();
	cout << "please enter an integer in 0 - 5: ";
	while (cin >> ins) {
		try {
			switch(ins) {
			case 0:
				help_info();
				break;
			case 1:
				print_course(course);
				break;
			case 2:
				cout << "In total: " << course.size() << endl;
				break;
			case 3:
				longest_name(course);
				break;
			case 4:
				delete_course(course);
				break;
			case 5:
				cout << "Successfully exit!" << endl;
				return 0;
			default:
				throw(runtime_error("invalid input! "));
			}
		} catch(runtime_error err) {
			cout << err.what();
		}
		cout << "please enter an integer in 0 - 5: ";
	}
	return 0;
}

void delete_course(course_type& course)
{
	if(!course.empty()) {
		cout << course.back().course_name;
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
	// get the maximum length of course names
	for (auto i : course)
		if (i.course_name.size() > max_length)
			max_length = i.course_name.size();

	// print courses info with the longest name
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
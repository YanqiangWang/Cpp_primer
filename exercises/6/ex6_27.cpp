#include <initializer_list>
int sum_elems(std::initializer_list<int> il)
{
	int sum = 0;
	for (auto beg = il.begin(); beg != il.end(); ++beg) {
		sum += *beg;
	}
	return sum;
}
#include <iostream>
using namespace std;

void function(int i)
{
	static int j;
}

int main()
{
	int i;
	function(i);
	return 0;
}
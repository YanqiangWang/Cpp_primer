#include<iostream>
using namespace std;
/*
 * type error test program
 */

int test(int n) {
	return n;
}

int main() {
	test("error");
	return 0;
}
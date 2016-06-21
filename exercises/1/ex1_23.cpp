#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item currBook, book;
	if (cin >> currBook) {
		int cnt = 1;
		while (cin >> book) {
			if (currBook.isbn() == book.isbn())
				++cnt;
			else {
				cout << "The book " << currBook.isbn() << " occurs "
					 << cnt << " times" << endl;
				currBook = book;
				cnt = 1;
			}
		}
		cout << "The book " << currBook.isbn() << " occurs "
			 << cnt << " times" << endl;
	}
	return 0;
}
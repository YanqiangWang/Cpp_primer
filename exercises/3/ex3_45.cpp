#include <iostream>
#include <cstddef>
#include <iterator>
using namespace std;

int main()
{
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i != rowCnt; ++i)
		for (size_t j = 0; j != colCnt; ++j)
			ia[i][j] = i * colCnt + j;
		
	// version 1
	for (auto &row : ia) {
		for (int col : row) {
			cout << col << " ";
		}
		cout << endl;
	}
	
	// version 2
	for (int i = 0; i < rowCnt; ++i) {
		for (int j = 0; j < colCnt; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	
	// version 3
	for (auto row = ia; row != ia + 3; ++row) {
		for (int *col = *row; col != *row + 4; ++col)
			cout << *col << " ";
		cout << endl;
	}
	
	return 0;
}
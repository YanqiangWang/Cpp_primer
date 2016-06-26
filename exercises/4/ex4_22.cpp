#include <iostream>
#include <string>
using namespace std;

int main()
{
	int score = 0;
	while(cin >> score) {
		// version 1
		string final_grade = (score > 90) ? "hige pass" 
			: (score > 75) ? "pass" : (score < 60) ? "fail" : "low pass";
		cout << "version 1: " << final_grade << endl;
		// version 2
		string final_grade2;
		if (score < 60)
			final_grade2 = "fail";
		else if (score <= 75)
			final_grade2 = "low pass";
		else if (score <= 90)
			final_grade2 = "pass";
		else
			final_grade2 = "high pass";
		cout << "version 2: " << final_grade2 << endl;
	}
	return 0;
}
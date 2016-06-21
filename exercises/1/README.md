**Exercise 1.1**  
>[GCC and File Extensions](http://labor-liber.org/en/gnu-linux/development/extensions)  

**Exercise 1.2**  
>Windows: -1  
Linux: 255  
Why? Please look at [this](http://www.tldp.org/LDP/abs/html/exitcodes.html)  

**Exercise 1.6**  
>It's illegal.  
[Error] expected primary-expression before '<<' token.  
Fixed it: remove the spare semicolons.  

**Exercise 1.7**  
>Example Code:  

```
#include<iostream>

int main() {
	/* Test */
	Test */
	return 0;
}
```
>Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_7_error_info.png)  

**Exercise 1.8**  
```
std::cout << "/*"; // Correct
std::cout << "*/"; // Correct
std::cout << /* "*/" */; // Compile Error
std::cout << /* "*/" /* "/*" */;  // Correct
```
>Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_8_error_info_2.png)  

**Exercise 1.12**  
>The loop sums up the integers form -100 to 100.  
The final value is 0.  

**Exercise 1.14**  
>A simular question on [Stack Overflow](http://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)  

**Exercise 1.15**  
>Example Code 1:  

```
#include<iostream>
using namespace std;
/*
 * syntax error test program
 */

int main() {
	cout << "Read each file." << endl;
	cout << "Update master." << endl;
	cout << "Write new master." << endl;
	return 0;
}
```
>Error 1: missing ) in parameter list for main (line 7)  
Error Info: 

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_0.png)  
>Error 2: used colon, not a semicolon, after endl (line 8)  
Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_1.png)  
>Error 3: missing quotes around string literal (line 9)  
Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_2.png)  
>Error 4: second output operator is missing (line 10)  
Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_3.png)  
>Error 5: missing : on return statement (line 11)  
Error Info:  

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_4.png)  

>Example Code 2:  

```
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
```
Error Info:  
![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_5.png)  
>Example Code 3:  
```
#include<iostream>
/*
 * declaration error test program
 */
int main() {
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2;
	cout << v1 + v2 << std::endl;
	return 0;
}
```
Error Info:  
![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/ex1_15_error_info_6.png)  

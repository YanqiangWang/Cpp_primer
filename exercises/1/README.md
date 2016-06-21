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
>Example:  

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
A simular question on [Stack Overflow](http://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)

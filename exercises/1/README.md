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

![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/1/images/X1_7_error_info.png)  


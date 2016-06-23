**Exercise 2.1**  
>C++ guarantees `short` and `int` is at least 16 bits, `long` at least 32 bits, `long long` at least 64 bits.  
The `signed` can represent positive nubers, negative numbers and zero, while `unsigned` can only represent numbers no less than zero.  
`float` is an IEEE single-precision floating point number (binary32), and `double` is an IEEE double-precision floating number (binary64).  

**Exercise 2.2**  
>`double` or `float` can be used for rate, principal and payment.  

**Exercise 2.3**  
```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl; // 32
std::cout << u - u2 << std::endl; // 4294967264

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl; // 32
std::cout << i - i2 << std::endl; // -32
std::cout << i - u << std::endl; // 0
std::cout << u - i << std::endl; // 0
```

**Exercise 2.4**  
![](https://github.com/YanqiangWang/Cpp_Primer/blob/master/exercises/2/images/ex2_4_test.png)  

**Exercise 2.5**  
>(a) 'a', L'a', "a", L"a"  
character literal, wide character literal, string literal, string wide character literal.  
(b) 10, 10u, 10L, 10uL, 012, 0xC  
decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal.  
(c) 3.14, 3.14f, 3.14L  
double, float, long double  
(d) 10, 10u, 10., 10e-2  
decimal, unsigned decimal, double, double.  

**Exercise 2.6**  
>The first line's integer is decimal.
The second line:  
1. `int month = 09` is invalid, cause octal doesn't have digit `9'.  
2. legal octal.  

**Exercise 2.7**  
>(a) "Who goes with F\145rgus?\012"  
Who goes with Fergus?(new line) "string"  
(b) 3.14e1L  
31.4 "long double"  
(c) 1024f  
Error: The suffix is valid only with floating point leterals  
(d) 3.14L  
3.14 "long double"  
**Reference**:  
[ASCII Table](http://www.asciitable.com/)  

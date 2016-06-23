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
![]()  

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
Reference:  
[ASCII Table](http://www.asciitable.com/)  

**Exercise 2.9**  
>(a) std::cin >> int input_value;  
Compile Error.  
```
int input_value = 0;
std::cin >> input_value;
```
>(b) int i = {3.14};  
It can't be convert from type 'double' to 'int'.  
```
double i = {3.14};
```
>(c) double salary = wage = 9999.99;  
'wage' hasn't been initialized  
```
double wage;
double salary = wage = 9999.99;
```
>(d) int i = 3.14;  
Correct. But the value will be truncated.  

**Exercise 2.10**  
```
std::string global_str; // ""
int global_int; // 0
int main() {
    int local_int; // not initialized
    std::string local_str; // ""
}
```

** Exercise 2.11**  
>(a) extern int ix = 1024; // definition  
(b) int iy; // definition  
(c) extern int iz; // declaration  

**Exercise 2.12**  
>(a) int double = 3.14;  // illegal  
(b) int _;  
(c) int catch-22; // illegal  
(d) int 1_or_2 = 1; // illegal  
(e) double Double = 3.14;  

**Exercise 2.13**  
>100

**Exercise 2.14**  
>100 45  

**Exercise 2.15**  
>(a) int ival = 1.01;  
(b) int &rval1 = 1.01; // Invalid. Initializer must be an object.  
(c) int &rval2 = ival;  
(d) int &rval3; // An reference must be initialized.  

**Exercise 2.16**  
>int i = 0, &r1 = i;  
double d = 0, &r2 = d;  
(a) r2 = 3.14159; // legal. Let 'd' equals 3.14159  
(b) r2 = r1
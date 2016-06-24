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

**Exercise 2.11**  
```
(a) extern int ix = 1024; // definition  
(b) int iy; // definition  
(c) extern int iz; // declaration  
```

**Exercise 2.12**  
```
(a) int double = 3.14;  // illegal  
(b) int _;  
(c) int catch-22; // illegal  
(d) int 1_or_2 = 1; // illegal  
(e) double Double = 3.14;  
```

**Exercise 2.13**  
>100

**Exercise 2.14**  
>100 45  

**Exercise 2.15**  
```
(a) int ival = 1.01;  
(b) int &rval1 = 1.01; // Invalid. Initializer must be an object.  
(c) int &rval2 = ival;  
(d) int &rval3; // An reference must be initialized.  
```

**Exercise 2.16**  
```
int i = 0, &r1 = i;  
double d = 0, &r2 = d;  
(a) r2 = 3.14159; // legal. let 'd' equals 3.14159  
(b) r2 = r1; // valid. automatic convert will happen.  
(c) i = r2; // valid. but value will be truncated.
(d) r1 = d; // valid. but value will be truncated.
```
**Exercise 2.17**  
>10 10

**Exercise 2.19**  
>definition:  
the pointer is "points to" any other type.  
the reference is "another name" of an object.  
key difference:  
a reference is another name of an already existing object. a pointer is an object in its own right.  
Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. a pointer can be assigned and copied.  
a reference always get the object to which the reference was initially bound. a single pointer can point to several different objects over its lifetime.  
a reference must be initialized. a pointer need not be initialized at the time it is defined.  

**Exercise 2.20**  
```
int i = 42; // assign i by 42
int *p1 = &i; // p1 point to i
*p1 = *p1 * *p1 // the same as: i = i * i
```
**Exercise 2.21**  
```
int i = 0;
(a) double *dp = &i; // illegal. Type int* cannot be converted to double*
(b) int *ip = i; // illegal. Type int cannot be converted to int*
(c) int *p = &i; // legal.
```
**Exercise 2.22**  
```
if(p) // whether p is zero or not
if(*p) // whether *p is nullptr or not
```

**Exercise 2.23**  
>No. Because more information needed to determine whether the pointer is valid or not  

**Exercise 2.24**  
>void* is a special pointer that may point to any type.  
For type safty, C++ forbids implicit conversions like long *lp = &i  

**Exercise 2.25**  
>(a) int* ip, i, &r = i;  
a pointer to int, int, a reference to int  
(b) int i, \*ip = 0;  
int, a null pointer  
(c) int* ip, ip2;  
a pointer to int, int  

**Exercise 2.26**  
```
(a) const int buf; // illegal, buf must be initialized.
(b) int cnt = 0; // legal
(c) const int sz = cnt; // legal
(d) ++cnt; // legal
++sz; // illegal
```

**Exercise 2.27**  
```
(a) int i = -1, &r = 0; // illegal, r must be a const int&.  
(b) int *const p2 = &i2; // legal.  
(c) const int i = -1, &r = 0; // legal.  
(d) const int *const p3 = &i2; // legal.  
(e) const int *p1 = &i2; // legal.
(f) const int &const r2; // illegal, r2 is a reference that can't be const
(g) const int i2 = i, &r = i; // legal.
```

**Exercise 2.28**  
```
(a) int i, *const cp; // illegal, cp must be initialized.
(b) int *p1, *const p2; // illegal, p2 must be initialized.
(c) const int ic, &r = ic; // illegal, ic must be initialized.
(d) const int *const p3; // illegal, p3 must be initialized.
(e) const int *p; //legal, a pointer to const int.
```

**Exercise 2.29**  
```
(a) i = ic; // legal
(b) p1 = p3; // illegal, low-level rights not match
(c) p1 = &ic; // illegal
(d) p3 = &ic; // illegal, p3 is a const pointer
(e) p2 = p1; // illegal
(f) ic = *p3; // illegal
```

**Exercise 2.30**  
```
const int v2 = 0; // top-level const
int v1 = v2; 
int *p1 = &v1, &r1 = v1; 
const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2: low-level const, p3: both-level const, r2: low-level const
```

**Exercise 2.31**  
```
r1 = v2; // legal
p1 = p2; // illegal
p2 = p1; // legal
p1 = p3; // illegal
p2 = p3; // legal
```
**Exercise 2.32**  
>illegal

```
int null = 0, *p = nullptr;
```

**Exercise 2.33**  
```
a = 42; // set 42 to int a
b = 42; // set 42 to int b
c = 42; // set 42 to int c
d = 42; // Error. the type of d is int*
e = 42; // Error. the type of e is const int*
g = 42; // Error. the type of g is const int&
```

**Exercise 2.35**  
```
const int i = 42;
auto j = i; // j: int
const auto &k = i; // k: const int&
auto *p = &i; // p: const int*
const auto j2 = i, &k2 = i; // j2: const int, k2: const int&
```

**Exercise 2.36**  
```
int a = 3, b = 4;
decltype(a) c = a; // c: int
decltype((b)) d = a; // d: a reference to int
++c; // c: 4
++d; // a: 4, d: 4
```

**Exercise 2.37**  
```
int a = 3, b = 4;
decltype(a) c = a; // c: int
decltype(a = b) d = a; // d: int&
// a: 3, b: 4, c: 3, d = 3
```

**Exercise 2.38**  
>We define a variable with a type that the compiler deduces from an expression.   
Type specifier `decltype` returns the type without using the expression to initialize the variable, other than 'auto'.  
Another important difference between `decltype` and `auto` is that the deduction done by `decltype` depends on the form of its given name.  

```
int i = 0, &r = i;
// the same
auto a = i;
decltype(i) b = r;
// different
auto c = r;
decltype(r) d = i;
```

**Exercise 2.39**  
![]
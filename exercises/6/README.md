**Exercise 6.1**  
>Parameters: Local variable declared inside the function parameter list. they are initialized by the arguments provided in the each function call.  
Arguments: Values supplied in a function call that are used to initialize the function's parameters.  

**Exercise 6.2**  
```
// (a) return type is not matching
string f() {
    string s;
    // ...
    return s;
}
// (b) no return type
void f2 (int i) {
}
// (c) parameters can't be the same name
int calc(int v1, int v2) {}
// (d) the function needs a bracket
double square(double x) {
    return x * x;
}
```
**Exercise 6.6**  
>local variable: Variables defined inside a block;  
parameter: Local variables declared inside the function parameter list;  
local static variable: local static variable£¨object£© is initialized before the first time execution passes through the object¡¯s definition.Local statics are not destroyed when a function ends; they are destroyed when the program terminates.  

**Exercise 6.13**  
>void f(T) pass the argument by value. nothing the function does to the parameter can affect the argument. void f(T&) pass a reference, will be bound to whatever T object we pass.  

**Exercise 6.14**  
```
// a parameter should be a reference type:
void reset(int& num) {
    num = 0;
}
// a parameter should not be a reference:
void print(vector<int>::iterator begin, vector<int>::iterator end) {
    for (vector<int>::iterator iter = begin; iter != end; ++iter)
        cout << *iter << endl;
}
```

**Exercise 6.15**  
>why is `s` a reference to const but `occurs` is a plain reference?  
cause the `s` should not be changed by this function. but `occurs`'s result must be calculated by the function.  
Why are these parameters references, but the char parameter `c` is not?  
casue `c` maybe a temp varable.   
What would happen if we made `s` a plain reference? What if we made `occurs` a reference to const?  
`s` could be changed in the function, and `occurs` whould not be changed. so occurs = 0. it is an error.  

**Exercise 6.16**  
```
bool is_empty(const string& s) {return s.empty();}
```
>Since this function doesn't change the argument, `const` shoud be added before `string&s`, otherwise this function is misleading and can't be used with const string or in a const function.  

**Exercise 6.17**  
>Not the same. For the first one "const" was used, since no change need to do for the argument. For the second function, "const" can't be used, because the content of the agument should be changed.  

**Exercise 6.19**  
```
double calc(double);
int count(const string&, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
// (a) illegal, too much parameters.
calc(23.4, 55.1);
// (b) legal, but not recommended.
count("abcda", 'a');
// (c) legal
calc(66);
// (d) legal
sum(vec.begin(), bec.end(), 3.8);
```

**Exercise 6.20**  
>If we can use `const`, just use it. If we make a parameter a plain reference when it could be a reference to `const`, the reference value maybe changed.  

**Exercise 6.24**  
>In this function, the size of the array is irrelevant. If we want to pass an array which size is ten, we should use reference like that:  
```
void print_10(const int (&ia)[10]) {}
```

**Exercise 6.28**  
>`const string&`  

**Exercise 6.29**  
>Depends on the type of elements of `initializer_list`. When the type is POD(Plain Old Data) Type, reference is unnecessary. Because POD is cheap to copy(such as `int`). Otherwise, Using reference(`const`) is the better choice.  

**Exercise 6.30**  
![](https://github.com/YanqiangWang/Cpp_primer/blob/master/exercises/6/images/ex6_30_error_info.png)

**Exercise 6.31**  
>when you can find the preexited object that the reference refered.  

**Exercise 6.32**  
>legal, it gave the values (0 ~ 9) to array `ia`.  

**Exercise 6.34**  
>case 1: If the argument is positive, recursion stops at `0`.(Note: There is one extra multiplication step though as the combined expression for factorial(5) reads 5 * 4 * 3 * 2 * 1 * 1. In terms of programming languages learning, such subtle difference probably looks quite trivial. In algorithms analysis and proof, however, this extra step may be super important.)  
case 2 : if the argument is negative, recursion would never stop. As a result, a stack overflow would occur.  

**Exercise 6.35**  
>the recursive function will always use `val` as the parameter. a recursion loop would happen.  

**Exercise 6.39**  
```
// (a) illegal
int calc(int, int);
int calc(const int, const int);
// (b) illegal
int get();
double get();
// (c) legal
int *reset(int *);
double *reset(double *);
```

**Exercise 6.40**  
>(b)  

**Exercise 6.41**  
```
char *init(int ht, int wd = 80, char bckgrnd = ' ');
// (a) illegal, the parameters are not matching
init();
// (b) legal
init(24.10);
// (c) legal, but not match, 'wd' would be setting to '*'
init(14, '*');
```

**Exercise 6.43**  
>Both two should put in a header.  
(a) is an inline function.  
(b) is the declaration of useful function.  
we always put them in the header.  

**Exercise 6.46**  
>No. Because the return type is not a constant expression.  

**Exercise 6.48**  
>This loop let user input a word all the way until the word is sought.  
It isn't a good use of assert. because if user begin to input a word, the `cin` would be always have content. so the `assert` would be always `true`. It is meaningless. using `assert(s == sought)` is more better.  

**Exercise 6.49**  
candidate function:  
>Set of functions that are considered when resolving a function call. (all the functions with the name used in the call for which a declaration is in scope at the time of the call.)  

viable function:  
>Subset of the candidate functions that could match a given call. It have the same number of parameters as arguments to the call, and each argument type can be converted to the corresponding parameter type.  

**Exercise 6.50**  
```
// (a) f(2.56, 42) illegal
// (b) f(42)
void f(int);
// (c) f(42, 0)
void f(int, int);
// (d) f(2.56, 3.14)
void f(double, double = 3.14);
```

**Exercise 6.52**  
>(a) Match through a promotion  
(b) Arithmetic type conversion  

**Exercise 6.53**  
```
// (a) legal
int calc(int&, int&);
int calc(const int&, const int&);
// (b) legal
int calc(char*, char*);
int calc(const char*, const char*);
// (c) illegal
int calc(char*, char*);
int calc(char* const, char* const);
```

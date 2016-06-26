**Exercise 4.1**  
>105  

**Exercise 4.2**  
```
(a) *(vec.begin())
(b) (*(vec.begin())) + 3
```

**Exercise 4.3**  
>No. it can't improve preformance significantly, but it makes bugs uneasy to discover.  

**Exercise 4.4**  
```
(((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)
```

**Exercise 4.5**  
```
(a) -30 * 3 + 21 / 5 == -86
(b) -30 + 3 * 21 / 5 == -18
(c) 30 / 3 * 21 % 5 == 0
(d) -30 / 3 * 21 % 4 == -2
```

**Exercise 4.6**  
>num % 2

**Exercise 4.7**  
>Overflow happens when a value is computed that is outside the range of values that the type can represent.

```
short short_value = 32767; ++short_value;
unsigned uvalue = 0; --uvalue;
unsigned short value = 65535; ++value;
```

**Exercise 4.8**  
>logical `AND`: the second operand is evaluated if and only if the left side is true.  
logical `OR`: the second operand is evaluated if and only if the left side is false.  
equality operators `==`: undefined.  

**Exercise 4.9**  
```
const char *cp = "Hello World";
if (cp && *cp)
```
>if `cp` is not nullptr, `cp` is true.  
if the first letter is a nonzero value, `*cp` is true.  

**Exercise 4.10**  
```
int num = 0;
while(cin >> num && num != 42){}
```

**Exercise 4.11**  
```
if(a > b && b > c && c > d){}
```

**Exercise 4.12**  
>the same as i != (j < k)  

**Exercise 4.13**  
```
int i; double d;
(a) d = i = 3.5; // i: 3, d: 3.0
(b) i = d = 3.5; // i: 3, d: 3.5
```

**Exercise 4.14**  
```
if(42 = i) // Compile error: not assignable
if(i = 42) // true. assign to i from 42
```

**Exercise 4.15**  
>Cannot assign to 'int' from 'int *'

```
double dval; int ival; int *pi;
dval = ival = 0;
pi = 0;
```

**Exercise 4.16**  
```
(a) if ((p = getPtr()) != 0)
(b) if (i == 1024)
```

**Exercise 4.17**  
```
int i = 0, j = 0;
j = ++i; // j: 1, i: 1
j = i++; // j: 1, i: 2
```

**Exercise 4.18**  
>It will print from the second element and dereference v.end() at last, which is a UB.

**Exercise 4.19**  
```
(a) ptr != 0 && *ptr++ // check ptr is not a nullptr and the pointer value, and then move the pointer to next position
(b) ival++ && ival // check ival and ival + 1 whether equal 0
(c) vec[ival++] <= vec[ival] // undefined behaviour
// vec[ival] <= vec[ival + 1]
```

**Exercise 4.20**  
```
(a) *iter++; // return iter, then ++iter.
(b) (*iter)++; // illegal, iter is a string, cannot increment value.
(c) *iter.empty(); // illegal.
(d) iter->empty(); // correct. indicate the iter's value whether empty.
(e) ++*iter; // illegal.
(f) iter++->empty(); // legal. return iter->empty(), and then ++iter.
```

**Exercise 4.23**  
```
string s = "word";
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```

**Exercise 4.24**  
```
finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
```
>the same as:  

```
finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

**Exercise 4.25**  
```
00000000 00000000 00011100 01000000B
11111111 11111111 11100011 10111111B
=-7296D
```

**Exercise 4.26**  
>The result is undefined.  

**Exercise 4.27**  
```
unsigned long ul1 = 3, ul2 = 7;
(a) ul1 & ul2 // 7
(b) ul1 | ul2 // 3
(c) ul1 && ul2 // true
(d) ul1 || ul2 // true
```

**Exercise 4.29**  
>10 1

**Exercise 4.30**  
```
(a) sizeof(x) + y
(b) sizeof(p->mem[i])
(c) sizeof(a) < b
(d) sizeof f() // if f() return void, it's invalid
```

**Exercise 4.31**  
>The prefix version avoids unnecessary work. It increments the value and returns the incremented version.The postfix operator must store the original value so that it can return the unincremented value as its result.  

```
for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    ivec[ix] = cnt;
```

**Exercise 4.32**  
>`ptr` and `ix` has the same function in the loop.

**Exercise 4.33**  
>If `someValue` is true, then `++x`, and the result is `y`, if `someValue` is `false`, then `--x`, and the result is `--y`.  

```
(someValue ? ++x, ++y : --x), --y
```

**Exercise 4.34**  
```
(a) if (fval) // float -> bool
(b) dval = fval + ival // int -> float -> double
(c) dval + ival * cval // char -> int -> double
```

**Exercise 4.35**  
```
(a) cval = 'a' + 3; // 'a' promoted to int, and then the result of ('a' + 3) converted to char
(b) fval = ui - ival * 1.0; // 'ival', 'ui' promoted to double, and then the result converted to float
(c) dval = ui * fval; // 'ui' promoted to float, and the result convert to double
(d) cval = ival + fval + dval; // 'ival' promoted to float, and the result of 'ival + fval' promoted to double, and the result of the right expression converted to char
```

**Exercise 4.36**  
```
i *= static_cast<int>(d);
```

**Exercise 4.37**  
```
(a) pv = const_static<string*>(ps);
(b) i = static_cast<int>(*pc);
(c) pv = static_cast<void*>(&d);
(d) pc = reinterpret_cast<char*>(pv);
```

**Exercise 4.38**  
>`j / i` is an int, converted to double and assigned to slope.

**Exercise 3.3**  
>For code like `is >> s`, input is separated by whitespaces while reading into string `s`.  
For code like `getline(is, s)`, input is separated by newline `\n` while reading into string `s`. Other whitespaces are ignored.  

**Exercise 3.7**  
>if change the type to `char`, the assignment `c = 'X'` won't mutate string `s`.  

**Exercise 3.9**  
>illegal. Because `s` is empty, this operation is invalid.  

**Exercise 3.10**  
>It depends on the code within for loop body.  
The type of `c` is `const char&`  

**Exercise 3.12**  
```
(a) vector<vector<int>> ivec; // Correct
(b) vector<string> svec = ivec; // illegal. type conversion error
(c) vector<string> svec(10, "null"); // Correct. 10 strings with the same value "null"
```

**Exercise 3.13**  
```
(a) vector<int> v1; // size: 0, no values
(b) vector<int> v2(10); // size: 10, value: 0
(c) vector<int> v3(10, 42); // size: 10, value: 42
(d) vector<int> v4{10}; // size: 1, value: 10
(e) vector<int> v5{10, 42}; // size: 2, value: 10, 42
(f) vector<string> v6{10}; // size: 10, value: ""
(g) vector<string> v7{10, "hi"}; // size: 10, value: "hi"
```

**Exercise 3.18**  
>illegal, we can use the function `push_back()` to add this number  

**Exercise 3.19**  
```
vector<int> ivec = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
vector<int> ivec2(10, 42); // The best one
vector<int> ivec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
```

**Exercise 3.26**  
>`beg+end` is meaningless.  


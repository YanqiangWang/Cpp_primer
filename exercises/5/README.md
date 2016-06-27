**Exercise 5.1**  
```
; // null statement
```
>used as a placeholder, for example:  

```
// read until we hit end-of-file or find an input equal to sought
while(cin >> s && s != sought);
```

**Exercise 5.2**  
>A block is a (possibly empty) sequence of statements and declarations surrounded by a pair of curly braces.It's used when multiple statements are needed.  

**Exercise 5.3**  
```
while(val <= 10)
    sum += val, ++val;
```
>This written version diminishes the readability.  

**Exercise 5.4**  
>(a) illegal declaration  

```
stirng::iterator iter == s.begin();
while (iter != s.end()) {}
```
>(b) status is only declared inside of while scope  

```
while (bool status = find(word)) {
    if (!status) {}
}
```

**Exercise 5.5**  
```
// (a)
if (ival1 != ival2)
    ival1 = ival2;
else
    ival1 = ival2 = 0;
// (b)
if (ival < minval) {
    minval = ival;
    occurs = 1;
}
// (c)
int ival = get_value()
if (ival)
    cout << "ival = " << ival << endl;
else
    cout << "ival = 0\n";
// (d)
if (ival == 0)
    ival = get_value();
```

**Exercise 5.8**  
>Colloquial term used to refer to the problem of how to process nested if statements in which there are more ifs than elses. In C++, an else is always paired with the closest preceding unmatched if.

**Exercise 5.13**  
```
// (a) it should have a break statement
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++; break;
    case 'e': eCnt++; break;
    default: iouCnt++; break;
}
// (b) control bypass an explicitly initialized variable ix.  
unsigned index = some_value();
switch (index) {
    case 1:
        int ix;
        ix = get_value();
        ivec[ix] = index;
        break;
    default:
        ix = static_cast<int>(ivec.size()) - 1;
        ivec[ix] = index;
}
// (c) case label syntax error
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch(digit) {
    case 1: case 3: case 5: case 7: case 9:
        ++oddCnt;
        break;
    case 2: case 4: case 6: case 8: case 0:
        ++evenCnt;
        break;
}
// (d) case label must be a constant expression
const unsigned ival = 512, jval = 1024, kval = 4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
}
```

**Exercise 5.15**  
```
// (a) syntax error
int ix;
for (ix = 0; ix != sz; ++ix) {}
if (ix != sz) {}
// (b) syntax error
int ix;
for (;ix != sz; ++ix) {}
// (c) logical fault
for (int ix = 0; ix != sz; ++ix) {}
```

**Exercise 5.16**  
```
// while loop
int ix;
while(cin >> ix) {}
// rewrite
for (int ix; cin >> ix;) {}
// for loop
for (int i = 0; i < 10; ++i) {}
// rewrite
int i = 0;
while(i < 10) {
    // do something
    ++i;
}
```
>I prefer to use `for` loop  

**Exercise 5.17**  
```
// (a) add bracket
do {
    int v1, v2;
    cout << "Please enter two numbers to sum:";
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
} while (cin);
// (b) variables can't declared in condition statement
int val;
do {
} while (ival = get_response());
// (c)
int ival;
do {
    ival = get_response();
} while (ival);
```

**Exercise 5.22**  
```
int sz;
	do{
		sz = get_size();
	} while (sz <= 0);
```
**Exercise 7.8**  
>Define read's Sales_data parameter as plain reference since it's intended to change the revenue's value.  
Define print's Sales_data parameter as a reference to const since it isn't intended to change any member's value of this object.  

**Exercise 7.10**  
>the condition of the if statement would read two Sales_data object at one time.  

**Exercise 7.14**  
```
Sales_data():units_sold(0), revenue(0.0) {}
```

**Exercise 7.16**  
>There are no restrictions on how often an access specifier may appear.The specified access level remains in effect until the next access specifier or the end of the class body.  
The members which are accessible to all parts of the program should define after a public specifier.  
The members which are accessible to the member functions of the class but are not accessible to code that uses the class should define after a private specifier.  

**Exercise 7.17**  
>The only difference between using `class` and using `struct` to define a class is the default access level. (`class`: private, `struct`: public)  

**Exercise 7.18**  
>encapsulation is the separation of implementation from interface. It hides the implementation details of a type. (In C++, encapsulation is enforced by putting the implementation in the private part of a class)  

**Important advantages:**  

* User code cannot inadvertently corrupt the state of an encapsulation object.  
* The implementation of an encapsulated class can change over time without requiring changes in user-level code.  

**Exercise 7.19**  
>public:  
constructors, `get_name()`, `get_address()`;  
private:  
`name`, `address`  

**Exercise 7.20**  
>friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as members.  

**Pros:**  

* the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
* you can access all the nonpublic members conveniently.
* sometimes, more readable to the users of class.

**Cons:**  

* lessens encapsulation and therefore maintainability.
* code verbosity, declarations inside the class, outside the class.

**Exercise 7.
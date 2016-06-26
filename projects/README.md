**Shiyanlou Project Assignments:**  
---
>Write a program of course management for [Shiyanlou](https://www.shiyanlou.com/courses/405).  

**Week 1:**  
>This program requires those functions showing below:  

1. Directive can be circularly input after the program starting up.
2. If `0` input, print help info which shows the function of directives.
3. If `1` input, print course IDs and names stored in program.
4. If `2` input, print the amount of courses.
5. If `3` input, print course info of the program having the longest name. If there are more than one program having the longest name, all of them should be printed.
6. If `4` input, delete last course. Ifthere are no course at all, print error message.
7. If `5` input, exit.  

**Week 2:**  
>Optimize the codes of week one's project:  

1. Utilize `switch` in the judgement of user input.
2. If `5` input, use `break` to exit the loop.
3. Use `try-catch` to handle the exception of input which is not `0` to `5`, and then print error messages.
4. Rewrite each processing method for input to single function and declare it in header file. Consider whether it can be implemented inline and called by the loop in the main function.
5. If you find other ways in these chapters to optimize the codes, describe in the report detailly.
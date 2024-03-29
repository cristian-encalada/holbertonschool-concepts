# C - Functions, nested loops

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
- [x] [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss&ab_channel=ZackAnnaTutorials)
- [x] [C - Functions](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [x] [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [x] [C User-defined functions](https://www.programiz.com/c-programming/c-user-defined-functions#)
- [x] [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [x] [C - Header files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

## Learning Objectives

### General

__Q1. What are nested loops and how to use them__

Nesting of loops is the feature in C that allows the looping of statements inside another loop.

Any number of loops can be defined inside another loop, i.e., there is no restriction for defining any number of loops. The nesting level can be defined at n times. 

__Syntax of Nested loop__
```C
Outer_loop  
{  
    Inner_loop  
   {  
         // inner loop statements.  
   }  
       // outer loop statements.  
}  
```
Outer_loop and Inner_loop are the valid loops that can be a 'for' loop, 'while' loop or 'do-while' loop.

__Nested for loop__

The nested for loop means any type of loop which is defined inside the 'for' loop.
```C
for (initialization; condition; update)   
{  
    for(initialization; condition; update)  
    {  
           // inner loop statements.  
    }  
    // outer loop statements.  
}  
```
__Nested while loop__

The nested while loop means any type of loop which is defined inside the 'while' loop.
```C
while(condition)  
{  
    while(condition)  
    {  
         // inner loop statements.  
    }  
// outer loop statements.  
}  
```
__Q2.What is a function and how do you use functions__

Functions are the way we can structure our code into subroutines that we can:

1. Give a name to
2. Call when we need them

Even the simplest C program, that prints "Hello, World!", use of C functions:
```C
#include <stdio.h>

int main(void)
{
    printf("Hello, World!");
}
```
The `main()` function is a very important function, as it's the entry point for a C program.

For example, another function could be:
```C
void doSomething(int value)
{
    printf("%u", value);
}
```
Functions have 4 important aspects:
- They have a name, so we can invoke ("call") them later
- They specify a return value
- They can have arguments
- They have a body, wrapped in curly braces

The function body is the set of instructions that are executed any time we invoke a function.

If the function has no return value, you can use the keyword `void` before the function name. Otherwise you specify the function return value type (int for an integer, float for a floating point value, const char * for a string, etc).

You cannot return more than one value from a function.

A function can have arguments. They are optional. If it does not have them, inside the parentheses we insert void, like this:
```C
void doSomething(void)
{
   /* ... */
}
```
In this case, when we invoke the function we'll call it with nothing in the parentheses:
```C
doSomething();
```
If we have one parameter, we specify the type and the name of the parameter, like this:
```C
void doSomething(int value)
{
   /* ... */
}
```
When we invoke the function, we'll pass that parameter in the parentheses, like this:
```C
doSomething(3);
```
We can have multiple parameters, and if so we separate them using a comma, both in the declaration and in the invocation:
```C
void doSomething(int value1, int value2)
{
   /* ... */
}
```
Calling the previous function:
```C
doSomething(3, 4);
```
Parameters are passed by __copy__. This means that if you modify value1, its value is modified locally. The value outside of the function, where it was passed in the invocation, does not change.

If you pass a __pointer as a parameter__, you can modify that variable value because you can now access it directly using its memory address.

Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q3. What is the difference between a declaration and a definition of a function__

The distinction between a function declaration and function definition is similar to that of a data declaration and definition. 

The __declaration__ establishes the names and characteristics of a function but __does not allocate storage__ for it, while the __definition__ specifies the body for a function, associates an identifier with the function, and __allocates storage__ for it. 

Thus, the identifiers declared in this example:
```C
float square(float x);
```
do not allocate storage.

The __function definition contains a function declaration__ and the body of a function. 

The body is a block of statements that perform the work of the function. 

The identifiers declared in this example allocate storage; they are both declarations and definitions.
```C
float square(float x) 
{
	return x*x; 
}
```
__A function can be declared several times in a program__, but all declarations for a given function must be compatible; that is, the return type is the same and the parameters have the same type. 

However, __a function can only have one definition__. 

Declarations are typically placed in header files, while definitions appear in source files.

Source:
- [www.ibm.com](https://www.ibm.com/docs/en/i/7.4?topic=functions-function-declarations-definitions)

__Q4. What is a prototype__

Essentially, the function prototype specifies the input/output interlace to the function i.e. what to give to the function and what to expect from the function.

The prototype of a function is also called the signature of the function.

The function prototype serves the following purposes:
1) It tells the return type of the data that the function will return. 
2) It tells the number of arguments passed to the function. 
3) It tells the data types of each of the passed arguments. 
4) Also it tells the order in which the arguments are passed to the function.

Source:
- [www.geeksforgeeks.org](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)

__Q5. Scope of variables__

When you define a variable in a C program, depending on where you declare it, it will have a different __scope__.

This means that it will be available in some places, but not in others.

The position determines 2 types of variables:

- Global variables
- Local variables

This is the difference: __a variable declared inside a function is a local variable__, like this:
```C
int main(void)
{
  int age = 37;
}
```
Local variables are only accessible from within the function, and when the function ends they stop their existence. They are cleared from the memory (with some exceptions).

__A variable defined outside a function is a global variable__, like in this example:
```C
int age = 37;

int main(void)
{
  /* ... */
}
```
Global variables are accessible from any function of the program, and they are available for the whole execution of the program, until it ends.

Local variables are not available any more after the function ends.  

The reason is that __local variables__ are declared __on the stack__, by default, unless you explicitly allocate them __on the heap__ __using pointers__. But then you have to manage the memory yourself.

Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q6. What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89__

-Wall: Enables all warning messages that the compiler can generate. This includes warnings about constructs that are valid but are usually indicative of programming errors or questionable coding practices.

__-Werror__: Treats all warnings as errors, causing the compiler to stop with an error message if any warnings are generated.

__-pedantic__: Causes the compiler to issue warnings about code that violates ISO C or ISO C++ standards. This flag disables certain extensions that may be supported by the compiler.

__-Wextra__: Enables even more warning messages than -Wall, including warnings about certain constructs that are not included in the standard C or C++ language but are commonly used in practice.

`-std=gnu89_`: Specifies the version of the C language standard to use when compiling the code. In this case, it specifies the GNU dialect of the C89 standard.

Source:
- Manual Reference gcc (man gcc)

__Q7. What are header files and how to to use them with #include__

A header file is a file containing C declarations and macro definitions to be shared between several source files. 

You request the use of a header file in your program by including it, with the C preprocessing directive ‘#include’.

Header files serve two purposes.
1. System header files declare the interfaces to parts of the operating system. You include them in your program to supply the definitions and declarations you need to invoke system calls and libraries.
2. Your own header files contain declarations for interfaces between the source files of your program. Each time you have a group of related declarations and macro definitions all or most of which are needed in several different source files, it is a good idea to create a header file for them.

Including a header file produces the same results as copying the header file into each source file that needs it. Such copying would be time-consuming and error-prone. 

With a header file, the related declarations appear in only one place. If they need to be changed, they can be changed in one place, and programs that include the header file will automatically use the new version when next recompiled. 

The header file eliminates the labor of finding and changing all the copies as well as the risk that a failure to find one copy will result in inconsistencies within a program.

__Syntax of Header Files in C__

We can include header files in C by using one of the given two syntaxes whether it is a pre-defined or user-defined header file.

```C
#include <filename.h>    // for files in system/default directory
       or
#include "filename.h"    // for files in same directory as source file
```

Sources:
- [gcc.gnu.org](https://gcc.gnu.org/onlinedocs/cpp/Header-Files.html)
- [www.geeksforgeeks.org](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)

## Quiz answers

__Question #0__

Which of these loop statements don’t exist?
- foreach
- loop_to
- each

__Question #1__

What is the ASCII value of ``A``?
- 65

__Question #2__

 What is the ASCII value of ``a``?
- 97

__Question #3__

What is the ASCII value of ``J``?
- 74

__Question #4__

What is the ASCII value of ``0``?
- 48

__Question #5__

What is the ASCII value of ``-``?
- 45

__Question #6__

 What is the ASCII value of ``5``?
- 53

__Question #7__

What is the result of ``12 % 2``?	
- 0

__Question #8__
What is the result of ``12 % 3``?
- 0

__Question #9__

What is the result of ``12 % 10``?
- 2

__Question #10__

What is the result of ``89 % 7``?
- 5

[Go up](#table-of-contents)
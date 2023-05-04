# C - Variables, if, else, while

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
-    [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
-    [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
-    [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
-    [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
-    [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
-    [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
-    [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
-    [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
-    [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI&ab_channel=Simplified)

## Learning Objectives

__Q1. What are the arithmetic operators and how to use them__

__Operator in Computer Programming__

In computer programing, an operator is a character, symbol, keyword, or combination of those. It determines what action gets performed on one or more operands.

__An operand__ is an individual data item that gets manipulated by the operator.

__Types of Operators in C Programming__

__1. Unary operators__. Operate on a single operand.

Some of the unary operators in C are:
- Arithmetic operators such as the increment operator(++) and the decrement operator(--).
- Logical operators like the NOT(!) operator. 
- Bitwise operators like the NOT(~).

__2. Binary operators__. Operate on two operands. Some of the binary operators in C are:

- Arithmetic operators (+, -, *, /, %). 
- Equality/Relational operators (==, !=, >, <, >=, <=). 
- Logical/Conditional operators such as the AND(&&) and OR(||) operators.
- Bitwise operators ((&, |, ^, <<, >>)
- Assignment operators (=, +=, -=, *=, /=, %=),

__3. Ternary operators__ Operates on three operands. The general syntax looks something similar to the following:
```
(condition) ? expression1 : expression2;
```

That being sad, __Binary arithmetic operators__ (+, -, *, /, %) perform mathematical calculations on numerical data such as addition, subtraction, multiplication, division, and finding the remainder.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q2. What are the logical operators (sometimes called boolean operators) and how to use them?__

The logical operators evaluate the logical expression and return a result.

A logical expression is a combination of logical operators with one or multiple conditions.

The result is always a Boolean value. A Boolean value determines whether the expression is true or false.

There are three logical operators in C programming: `logical AND(&&)`, `logical OR(||)`, and `logical NOT (!)`.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q3. What the the relational operators? How to use them__

__Equality/Relational operators__ (==, !=, >, <, >=, <=). Compare two values and determine if one operand is greater than, less than, equal to, or not equal to the other operand.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q4. What values are considered TRUE and FALSE in C__

C does not have boolean data types, and normally uses integers for boolean testing.
- Zero is used to represent false, and One is used to represent true.
- For interpretation, Zero is interpreted as false and anything non-zero is interpreted as true.
- To make life easier, C Programmers typically define the terms "true" and "false" to have values 1 and 0 respectively.

Source:
- [Introduction to C Programming](https://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/Decisions.html#)

__Q5. What are the boolean operators and how to use them__

Boolean operators AND, OR, and NOT are used to manipulate logical statements. 

AND and OR are binary operators, while NOT is a unary operator. 

Source:
- [C Programming Tutorials](https://ecomputernotes.com/what-is-c/operator/boolean-operators)

__Q6. How to use the ``if, if ... else statements``__

In an if statement, you can check for a condition to be true, and then execute the block provided in the curly brackets:
```C
int a = 1;

if (a == 1)
{
  /* do something */
}
```
You can append an else block to execute a different block if the original condition turns out to be false:
```C
int a = 1;

if (a == 2)
{
  /* do something */
} 
else 
{
  /* do something else */
}
```
Beware of one common source of bugs - __always use the comparison operator `==` in comparisons, and not the assignment operator `=`__

Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q7. How to use comments__

Comments are good, but there is also a danger of over-commenting.

__NEVER__ try to explain HOW your code works in a comment: it's much better to write the code so that the working is obvious, and it's a waste of time to explain badly written code.

Generally, you want your comments to tell __WHAT__ your code does, not __HOW__.

Betty style for comments is the C89 style.
```C
/* Use this */
```
Don't use C99-style comments
```C
// Don't use this
```
The preferred style for long (multi-line) comments is:
```C
	/**
	 * This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 *
	 * Description:  A column of asterisks on the left side,
	 * with beginning and ending almost-blank lines.
	 */
```
Source:
- [C coding style for Holberton School](https://github.com/holbertonschool/Betty/wiki/Commenting)

__Q8. How to declare variables of types ``char, int, unsigned int``__

C provides us the following types to define integer values:

- char
- int
- short
- long

Most of the time, you'll likely use an int to store an integer. But in some cases, you might want to choose one of the other 3 options.

The char type is commonly used to store letters of the ASCII chart, but it can be used to hold small integers from -128 to 127. It takes at least 1 byte.

We're guaranteed that short is not longer than int. And we're guaranteed long is not shorter than int.

__Unsigned integers__

For all the above data types, we can prepend unsigned to start the range at 0, instead of a negative number. This might make sense in many cases.

- unsigned char will range from 0 to at least 255
- unsigned int will range from 0 to at least 65,535
- unsigned short will range from 0 to at least 65,535
- unsigned long will range from 0 to at least 4,294,967,295

Examples:
```C
int total = 500;
char c = 'x';
unsigned int age = 25;
```
- [C coding style for Holberton School](https://github.com/holbertonschool/Betty/wiki/Commenting)

__Q9. How to assign values to variables__

Using assignment operators (=, +=, -=, *=, /=, %=), which assign a specific value to a variable.

- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q10. How to print the values of variables of type ``char, int, unsigned int`` with ``printf``__

Using printf function, we can print the value of a variable.

In order to print the variable value, we must instruct the printf function the following details,

1.specify the format of variable.

2.variable name which we want to print.

__Basic format specifiers in C__

|Format Specifier |Data Type | Description | Syntax |
| -- | -- | -- | -- |
| %d | int | To print the integer value | printf("%d",<int_variable>); |
| %f | float | To print the floating number | printf("%f",<float_variable>); |
| %lf | double | To print the double precision floating number | printf("%d",<int_variable>); |
| %d | int | To print the integer value | printf("%lf",<double_variable>); |
| %c | char | To print the character value | printf("%c",<char_variable>); |

Example:

```c
#include<stdio.h>

int main()
{
    int  i = 10;
    char c = 'a';

    printf("Value of i = %d\n",i);
    printf("Value of c = %c\n",c);

    return 0;
}
```
Output:
```c
Value of i = 10
Value of c = a
```
Source:
[log2base2 - printing a value of a varaible](https://www.log2base2.com/C/basic/printing-value-of-a-variable.html)

__Q11. How to use the ``while`` loop__

While loops is simpler to write than a for loop, because it requires a bit more work on your part.

Instead of defining all the loop data up front when you start the loop, like you do in the for loop, using while you just check for a condition:
```c
while (i < 10)
{
/* Do something */
}
```
This assumes that __i__ is already defined and initialized with a value.

And this loop will be an __infinite loop__ unless you increment the i variable at some point inside the loop. An infinite loop is bad because it will block the program, allowing nothing else to happen.

Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q12. How to use variables with the ``while`` loop__

This is what you need for a "correct" while loop:
```C
int i = 0;

while (i < 10) {
  /* do something */

  i++;
}
```
Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q13. How to print variables using ``printf``__

Answered in Q10.

__Q14. What is the ``ASCII`` character set__

ASCII stands for the "American Standard Code for Information Interchange".

ASCII is a 7-bit character set containing 128 characters.

It contains the numbers from 0-9, the upper and lower case English letters from A to Z, and some special characters.

Source:

[w3schools - HTML ASCII Reference](https://www.w3schools.com/charsets/ref_html_ascii.asp)

__Q15. What are the purpose of the ``gcc`` flags ``-m32`` and ``-m64``__

These ‘-m’ switches are supported in addition to the above on x86-64 processors in 64-bit environments.

-m32
-m64

The -m32 option sets int, long, and pointer types to 32 bits, and generates code that runs on any i386 system.

The -m64 option sets int to 32 bits and long and pointer types to 64 bits, and generates code for the x86-64 architecture. For Darwin only the -m64 option also turns off the -fno-pic and -mdynamic-no-pic options.

Source:

[https://gcc.gnu.org/](https://gcc.gnu.org/onlinedocs/gcc/x86-Options.html)

## Quiz answers

__Question #0__

What is the size of the ``unsigned int`` data type?

- 4 bytes

__Question #1__

What is the size of the ``char`` data type?
- 1 byte

__Question #2__

What is the size of the ``float`` data type?
- 4 bytes

__Question #3__

Which of the following are valid ``if`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```
if (a > b)
{
  return (a);
}
```

```
if (a > b)
  return (a);
```
__Question #4__

Which of the following are valid ``for`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```

for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```

```
for (a = 0; a < b; a++)
    printf("%d\n", a);
```

```
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```

__Question #5__

Which of the following are valid ``while`` or ``do/while`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
while (a < b)
    printf("%d\n", a++);
```
[Go up](#table-of-contents)
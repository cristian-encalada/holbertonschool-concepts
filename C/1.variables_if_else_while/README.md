# C - Variables, if, else, while
## Resources
- [x] [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [x] [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [x] [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [x] [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [x] [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [x] [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [x] [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [x] [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [x] [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI&ab_channel=Simplified)
## Learning Objectives
### General
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the ``if, if ... else statements``
* How to use comments
* How to declare variables of types ``char, int, unsigned int``
* How to assign values to variables
* How to print the values of variables of type ``char, int, unsigned int`` with ``printf``
* How to use the ``while`` loop
* How to use variables with the ``while`` loop
* How to print variables using ``printf``
* What is the ``ASCII`` character set
* What are the purpose of the ``gcc`` flags ``-m32`` and ``-m64``
## Quiz answers
* Question #0
	- What is the size of the ``unsigned int`` data type?
		- 4 bytes
* Question #1
	- What is the size of the ``char`` data type?
		- 1 byte
* Question #2
	- What is the size of the ``float`` data type?
		- 4 bytes
* Question #3
	- Which of the following are valid ``if`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)
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
* Question #4
	- Which of the following are valid ``for`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)
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
* Question #5
	- Which of the following are valid ``while`` or ``do/while`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)
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

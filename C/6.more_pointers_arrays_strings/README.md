# C - More pointers, arrays and strings

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Quiz answers

__Question #0__
```C
var = "Best";
```
What is the type of ``var``?
- char *

__Question #1__

What is wrong with the following code?
```C
int n = 5;
int array[10];
int i = 3;

array[n] = i;
```
**Nothing is wrong**

__Question #2__

What is wrong with the following code?
```C
int n = 5;
int array[n];
int i = 3;

array[n] = i;
```
**It is impossible to declare the variable `array` this way**

__Question #3__

What is wrong with the following code?
```C
int n = 5;
int array[5];
int i = 3;

array[n] = i;
```
**It is not possible to access ``array[n]``**

__Question #4__

Why is it important to reserve enough space for an extra character when declaring/allocating a string?
- For the null byte (end of string)

__Question #5__

What is/are the difference(s) between the two following variables? (Except their names)
```C
char *s1 = "";
char *s2 = NULL;
```
 __The first one points to a 0-byte, the second one points to 0__
 
 __The first one can be dereferenced, not the second one__
 
 __Question #6__
 
 What happens when one tries to dereference a pointer to NULL?

- Segmentation fault

[Go up](#table-of-contents)
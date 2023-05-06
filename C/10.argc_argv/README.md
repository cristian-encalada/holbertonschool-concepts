# C - argc, argv

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24&ab_channel=PaulProgramming)

## Learning Objectives

__Q1. How to use arguments passed to your program__

For example, the command line
```
gcc -o myprog myprog.c
```
would result in the following values internal to GCC:
```C
argc = 4
argv[0] = gcc
argv[1] = -o
argv[2] = myprog
argv[3] = myprog.c
```

The first argument (argv[0]) is the name by which the program was called, in this case gcc. Thus, there will always be at least one argument to a program, and argc will always be at least 1.

Source:

- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

__Q2. What are two prototypes of main that you know of, and in which case do you use one or the other__
1. Main prototype without arguments:
```C
int main (void)
```
2. Main prototype with arguments (argv and argc) if you want to pass information from the command line to the program you are running:
```C
#include <stdio.h>

int main (int argc, char *argv[])
{

  return 0;
}
```
Main has two arguments. 

The name of the variable `argc` stands for __argument count__; argc contains the number of arguments passed to the program. 

The name of the variable `argv` stands for __argument vector__. A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.

Source:

- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

__Q3. How to use ``__attribute__((unused))`` or ``(void)`` to compile functions with unused variables or parameters__

__attribute__ unused

One of the easiest attributes to use, this marks a variable as intentionally being possibly unused. Not only does this quiet the compiler from issuing an unused-variable warning, it tells the human the same thing: this is intentional.

A common case of the unused int argc parameter to main() is one, as are variables sometimes excluded by conditional compilation.
```C
int main(int argc, char **argv)
{
   /* code that uses argv, but not argc */
}

$ gcc -W test.c
test.c:1: warning: unused parameter 'argc'
```
The `__attribute__` is added just after the variable name, and though it can appear unwieldy, it's a style you can get used to:
```C
int main(int argc __attribute__((unused)), char **argv)
{ ...
```
Another way to do spcify that argc is unused is:
 ```C
int main(int argc, char **argv)
{
   /* code that uses argv, but not argc */
   (void) argc;
}
```
`void` tells the compiler that the variables (in this case argc) are unused, to prevent the -Wunused warnings.

Sources:

- [Using GNU C `__attribute__`](http://unixwiz.net/techtips/gnu-c-attributes.html)
- [https://stackoverflow.com/](https://stackoverflow.com/questions/7354786/what-does-void-variable-name-do-at-the-beginning-of-a-c-function)

## Quiz answers

__Question #0__

What is ``argc``?
- The number of command line arguments
- The size of the ``argv`` array

__Question #1__

What is ``argv``?
- An array containing the program command line arguments
- An array of size ``argc``

__Question #2__

What is ``argv[0]``
- The program name

__Question #3__

What is ``argv[argc]``?
- NULL

__Question #4__

In the following command, what is argv[2]?
```C
$ ./argv My School is fun
```
**School**

__Question #5__

In the following command, what is ``argv[2]``?
```C
$ ./argv "My School" "is fun"
```
**is fun**

__Question #6__

In the following command, what is argv[2]?
```C
$ ./argv "My School is fun"
```
**NULL**

[Go up](#table-of-contents)
# C - Preprocessor

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&ab_channel=HowTo)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak&ab_channel=BestDotNetTraining)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Learning Objectives

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Quiz answers

__Question #0__

What are the steps of compilation?

1.preprocessor 2.compiler 3. assembler 4. linker

__Question #1__

The preprocessor generates assembly code
- False

__Question #2__

The preprocessor generates object code
- False

__Question #3__

The preprocessor links our code with libraries.
- False

__Question #4__
This portion of code is actually using the library stdlib.
```C
#include <stdlib.h>
```
- False

__Question #5__

The preprocessor removes all comments
- True

__Question #6__

What is the ``gcc`` option that runs only the preprocessor?

 -E

__Question #7__

``NULL`` is a macro
- True

__Question #8__

What will be the last 5 lines of the output of the command gcc -E on this code?
```C
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```
Answer:
```C
int main(void)
{
 ((void *)0);
 return (0);
}
```

__Question #9__

This code will try to allocate 1024 bytes in the `heap`:
```C
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```
- True

__Question #10__

What does the macro ``TABLESIZE`` expand to?
```C
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```
- 37

__Question #11__

This is the correct way to define the macro ``SUB``:
```C
#define SUB(a, b) a - b
```
Answer:
- No, it should be written this way:
```C
#define SUB(a, b) ((a) - (b))
```
__Question #12__

Why should we use include guards in our header files?

- To avoid the problem of double inclusion when dealing with the include directive.

__Question #13__

The macro `__FILE__` expands to the name of the current input file, in the form of a C string constant.
- True

__Question #14__

What will be the output of this program? (on a standard 64 bits, Linux machine)
```C
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```
Answer:

 __sizeof(i) = 1__

[Go up](#table-of-contents)
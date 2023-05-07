# C - malloc, free

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64&ab_channel=mycodeschool)

## Learning Objectives

Q1. What is the difference between automatic and dynamic allocation

Q2. What is ``malloc`` and ``free`` and how to use them

Q3. Why and when use ``malloc``

Q4. How to use ``valgrind`` to check for memory leak

## Quiz answers

__Question #0__

What is Valgrind?

- It’s a program to validate memory allocation

__Question #1__

How many bytes will this statement allocate? 
```C
malloc(sizeof(int) * 4)
```
**16**

__Question #2__

How many bytes will this statement allocate?
```C
malloc(sizeof(int) * 10)
```
**40**

__Question #3__

How many bytes will this statement allocate?
```C
malloc(sizeof(unsigned int) * 2)
```
**8**

__Question #4__

How many bytes will this statement allocate?
```C
malloc(sizeof(char) * 10)
```
**10**

__Question #5__

How many bytes will this statement allocate?
```C
malloc(10)
```
**10**

__Question #6__

How many bytes will this statement allocate?
```C
malloc((sizeof(char) * 10) + 1)
```
**11**

[Go up](#table-of-contents)
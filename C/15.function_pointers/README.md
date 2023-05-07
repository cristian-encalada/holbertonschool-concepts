# C - Function pointers

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

* [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
* [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
* [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE&ab_channel=mycodeschool)
* [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s&ab_channel=mycodeschool)
* [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

## Learning Objectives

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

## Quiz answers

__Question #0__

Which one is a pointer to a function?

- int (*func)(int a, float b);

__Question #1__

To store the address of this function
```C
void neyo(void);
```
to the variable `f` of the type pointer to a function that does not take any argument and does not return anything, you would do:
- f = neyo;
- f = &neyo;

__Question #2__

If `f` is a pointer that takes no parameter and return an `int`, you can call the function pointed by `f` this way:

- f();
- (*f)();

__Question #3__

The `void (*anjula[])(int, float)` is:
- An array of pointers to funtions that take an `int` and a `float` as parameters and returns nothing

__Question #4__

What does a pointer to a function point to:
- code
- The first byte of code of the function

[Go up](#table-of-contents)
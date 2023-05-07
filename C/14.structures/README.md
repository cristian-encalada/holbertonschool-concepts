# C - Structures, typedef

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

* [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
* [Documentation: structures](https://github.com/hs-hq/Betty/wiki/Documentation:-Data-structures)
* **Programming in C** by Stephen Kochan - Chapter 8, Working with Structures p163-189
* [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)

## Learning Objectives

* What are structures, when, why and how to use them
* How to use ``typedef``

## Quiz answers

__Question #0__

You should write documentation for all the structures you create

- True
- As soon as I write my structure

__Question #1__

The general syntax for a struct declaration in C is:
```C
struct tag_name{
    type member1;
    type member2;
    /* declare as many members as desired, but the entire structure size must be known to the compiler */
};
```
- True

__Question #2__

Those two codes do the same thing:
```C
typedef struct point point;
struct point{
    int x;
    int y;
};
point p = {1, 2};
```
```C
typedef struct point point;
struct point{
    int x;
    int y;
};
point p = { .y = 2, .x = 1};
```
- True

__Question #3__

Given this code:
```C
struct point{
    int x;
    int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;
```
To set the member y of my variable my_point to 98, I can do:
- my_point.y = 98;
- (*p).y = 98;
- p->y = 98;

[Go up](#table-of-contents)
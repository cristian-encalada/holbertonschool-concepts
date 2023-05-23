# C - Sorting algorithms & Big O

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [Sorting algorithm - Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation - Stack Overflow](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)

## Learning Objectives

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Quiz answers

__Question #0__

What is the time complexity of this function / algorithm?

```C
void f(int n)
{
    printf("n = %d\n", n);
}
```
O(1)

__Question #1__

What is the time complexity of this function / algorithm?

```C
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```
O(n)

__Question #2__

What is the time complexity of this function / algorithm?

```C
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```
O(n)

__Question #3__

What is the time complexity of this function / algorithm?

```C
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```
O(log(n))

__Question #4__

What is the time complexity of this function / algorithm?

```C
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```
O(n)

__Question #5 (Recursive)__

What is the time complexity of this function / algorithm?

```C
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```
O(n)

__Question #6__

What is the time complexity of this function / algorithm?

```C
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```
O(nlog(n))

__Question #7 (Review)__

What is the time complexity of this function / algorithm?

```C
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```
O(n^2)

__Question #8__

What is the time complexity of this function / algorithm?

```C
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```
O(2^n)

__Question #9__

What is the time complexity of this function / algorithm?

```C
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```
O(n^2)

__Question #10__

What is the time complexity of this function / algorithm?

```C
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```
- __O(n^2) (checker)__
- More accurate answer: O(n^3)

__Question #11__

What is the time complexity of accessing the nth element on an unsorted array?

O(1) -> assuming we have the index value.

__Question #12__

What is the time complexity of inserting at index n on an unsorted array?

- __O(n): worst case__
   - When the desired index is at the beginning or middle of the array.
   - When the desired index is at the end of the array, but the array is already full.
- O(1), assuming that the array has sufficient capacity to accommodate the new element.

__Question #13__

What is the time complexity of removing at index n in an unsorted array?

- __O(n) - worst case__: If the order needs to be maintained or preserved.
- O(1), if the order does not need to be maintaine or preserved.

__Question #14__

What is the time complexity of searching for an element in an unsorted array of size n? 
- O(n)

__Question #15__

What is the time complexity of setting a value at index n in an unsorted array?
- O(1) -> assuming that the index is within the valid range of the array

__Question #16__

What is the time complexity of accessing the nth element of a singly linked list?
- O(n) -> assuming that the index is valid and within the bounds of the list.

__Question #17__

What is the time complexity of inserting after the nth element of a singly linked list? (Assuming you have a pointer to the node to insert)
- __O(n) - worst case__ - If the insertion point is in the middle of the list
- O(1): If the insertion point is at the head or tail of the list

__Question #18__

What is the time complexity of removing the nth element of a singly linked list? (Assuming you have a pointer to the node to remove)
- O(n) - __worst case__ -> If you don't have a pointer to the previous node. This case requires traversing the list from the head to find the node before the nth node.
- O(1) -> If we have a pointer to the previous node.

__Question #19__

What is the time complexity of searching for an element in a singly linked list of size n? 
- O(n)

__Question #20__

What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)
- O(1)

__Question #21__

What is the time complexity of accessing the nth element of a doubly linked list?
- O(n)

__Question #22__

Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?
- O(n) -> __worst case__ -> when we don't have a direct pointer to the nth node and we need to traverse the list to find it.
- O(1) -> Doubly linked lists allow for constant time insertion at a given position when we have a pointer to the node.

__Question #23__

Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?
- O(1)

__Question #24__

What is the time complexity of searching for an element in a doubly linked list of size n?
- O(n)

__Question #25__

Assuming you have a pointer to the node to set the value of, what is the time complexity of setting the value of the nth element in a doubly linked list?
- O(1)

__Question #26__

What is the time complexity of the “push” operation onto a stack?
- O(1) -> It does not require traversing or modifying any other elements

__Question #27__

What is the time complexity of the “pop” operation onto a stack?
- O(1) -> It does not require traversing or modifying any other elements

__Question #28__

What is the time complexity of searching for an element in a stack of size n?
- O(n)

__Question #29__

What is the time complexity of “pushing” an element into a queue if you are given a pointer to both the head and the tail of the queue?
- O(1)

__Question #30__

What is the time complexity of “popping” an element in a queue if you are given a pointer to both the head and the tail of the queue?
- O(1)

__Question #31__

What is the time complexity of searching for an element in a queue of size n if you are given a pointer to both the head and the tail of the queue?
- O(n)

__Question #32__

What is the time complexity of searching for an element in a queue of size n if you are given a pointer to both the head and the tail of the queue?
- O(1)

__Question #33__

What is the time complexity of searching for an element - worst case - in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
- O(n)

__Question #34__

What is the `best case` time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
- O(1)

__Question #35__

What is the __worst case__ time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
- O(1) -> Checker -> __wrong__
- O(n)


__Question #36__

What is the time complexity of `best case` deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?
- O(1)

__Question #37__

What is the time complexity of `worst case` deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?
- O(n)

[Go up](#table-of-contents)
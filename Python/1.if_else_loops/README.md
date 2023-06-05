# 1. Python - If, else, loops, functions

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)


## Resources
- [More Control Flow Tools - Python Docs](https://docs.python.org/3/tutorial/controlflow.html)
- [Indentation Error - Youtube](https://www.youtube.com/watch?v=1QXOd2ZQs-Q)
- [How To Use String Formatters in Python 3 - Digital Ocean](https://www.digitalocean.com/community/tutorials/how-to-use-string-formatters-in-python-3)


## Learning Objectives


- Why indentation is so important in Python
- How to use the `if`, `if ... else` statements
- How to use comments
- How to affect values to variables
- How to use the `while` and `for` loops
- How to use the `break` and `continues` statements
- How to use `else` clauses on loops
- What does the `pass` statement do, and when to use it
- How to use `range`
- What is a function and how do you use functions
- What does return a function that does not use any `return` statement
- Scope of variables
- What’s a traceback
- What are the arithmetic operators and how to use them

## Quiz answers

__Question #0__
 
What do these lines print?
```python
if True:
    print("Holberton")
else:
    print("School")
```
- Holberton

__Question #1__

What do these lines print?
```python
if 12 == 48/4:
    print("Holberton")
else:
    print("School")
```
- Holberton

__Question #2__

What do these lines print?
```python
if 12 == 48/4 and False:
    print("Holberton")
else:
    print("School")
```
- School

__Question #3__

What do these lines print?
```python
if 12 == 48/3 or 12 is 12:
    print("Holberton")
else:
    print("School")
```
- Holberton

__Question #4__

What do these lines print?

```python
a = 12
if a > 2:
    if a % 2 == 0:
        print("Holberton")
    else:
        print("C is fun")
else:
    print("School")
```
- Holberton

__Question #5__

What do these lines print?
```python
a = 12
if a < 2:
    print("Holberton")
elif a % 2 == 0:
    print("C is fun")
else:
    print("School")
```
- C is fun

__Question #6__

What do these lines print?
```python
for i in range(4):
    print(i, end=" ")
```
- 0 1 2 3

__Question #7__

What do these lines print?
```python
for i in range(2, 4):
    print(i, end=" ")
```
- 2 3

__Question #8__

What do these lines print?
```python
for i in range(2, 10, 2):
    print(i, end=" ")
```
- 2 4 6 8

[Go up](#table-of-contents)

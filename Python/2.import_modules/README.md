# 1. Python - Import & modules

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)


## Resources
- [Modules - Python Docs](https://docs.python.org/3/tutorial/modules.html)
- [Command Line Arguments - Python Docs](https://docs.python.org/3/tutorial/stdlib.html#command-line-arguments)

## Learning Objectives

- Why Python programming is awesome
- How to import functions from another file
- How to use imported functions
- How to create a module
- How to use the built-in function `dir()`
- How to prevent code in your script from being executed when imported
- How to use command line arguments with your Python programs

## Quiz answers

__Question #0__
 
What do these lines print?
```python
>>> def my_function():
>>>     print("In my function")
>>> 
>>> my_function()
```
- In my function

__Question #1__

What do these lines print?
```python
>>> def my_function():
>>>     print("In my function")
>>> 
>>> my_function
```
- function my_function at …

__Question #2__

What do these lines print?
```python
>>> def my_function(counter):
>>>     print("Counter: {}".format(counter))
>>> 
>>> my_function(12)
```
- Counter: 12

__Question #3__

What do these lines print?
```python
>>> def my_function(counter=89):
>>>     print("Counter: {}".format(counter))
>>> 
>>> my_function(12)
```
- Counter: 12

__Question #4__

What do these lines print?

```python
>>> def my_function(counter=89):
>>>     print("Counter: {}".format(counter))
>>> 
>>> my_function()
```
- Counter: 89

__Question #5__

What do these lines print?
```python
>>> def my_function(counter=89):
>>>     return counter + 1
>>> 
>>> print(my_function())
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

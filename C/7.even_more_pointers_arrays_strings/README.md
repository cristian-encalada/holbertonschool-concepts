# C - Even more pointers, arrays and strings
## Resources
- [x] [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [x] [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [x] [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [x] [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
## Learning Objectives
### General
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings
## Quiz answers
* Question #0
- What is the size of ``p`` in this code?
```
int *p;int *p;
```
**8 bytes**
* Question #1
- What is the size of ``p`` in this code?
```
int **p;
```
**8 bytes**
* Question #2
- In this following code, what is the value of ``a[0][0]``?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**1**
* Question #3
- In this following code, what is the value of ``a[3][0]``?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**7**
* Question #4
- In this following code, what is the value of ``a[3][1]``?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**8**
* Question #5
- In this following code, what is the value of ``a[1][1]``?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
 **4**
* Question #6
- What is the size of ``*p`` in this code?
	- **8 bytes**
* Question #7
- What is the size of ``*p`` in this code?
	- **4 bytes**
* Question #8
- What is stored inside a pointer to a pointer to an int?
	- An address where an address is stored

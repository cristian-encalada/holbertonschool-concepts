# C - Even more pointers, arrays and strings

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Learning Objectives

__Q1. What are pointers to pointers and how to use them__

A pointer to a pointer is a form of multiple indirection, or a chain of pointers. Normally, a pointer contains the address of a variable. 

When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value as shown below.

<img alt="double_pointer" src="https://www.tutorialspoint.com/cprogramming/images/pointer_to_pointer.jpg">

A variable that is a pointer to a pointer must be declared as such. This is done by placing an additional asterisk in front of its name. 

For example, the following declaration declares a pointer to a pointer of type int −
```C
int **var;
```
When a target value is indirectly pointed to by a pointer to a pointer, accessing that value requires that the asterisk operator be applied twice, as is shown below in the example:
```C
#include <stdio.h>
 
int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
```

When the above code is compiled and executed, it produces the following result:
```C
Value of var = 3000
Value available at *ptr = 3000
Value available at **pptr = 3000
```
Source:
- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)

__Q2. What are multidimensional arrays and how to use them__

__Multi-dimensional Arrays in C__

C programming language allows multidimensional arrays. Here is the general form of a multidimensional array declaration
```C
type name[size1][size2]...[sizeN];
```
For example, the following declaration creates a three dimensional integer array
```C
int threedim[5][10][4];
```

__Two-dimensional Arrays__

The simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is, in essence, a list of one-dimensional arrays. To declare a two-dimensional integer array of size `[x][y]`, you would write something as follows:
```C
type arrayName [ x ][ y ];
```
Where `type` can be any valid C data type and `arrayName` will be a valid C identifier. A two-dimensional array can be considered as a table which will have x number of rows and y number of columns. 

For example, a two-dimensional array a, which contains three rows and four columns can be shown as follows:
<img alt="double_array" src="https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg">

Thus, every element in the array a is identified by an element name of the form a[ i ][ j ], where 'a' is the name of the array, and 'i' and 'j' are the subscripts that uniquely identify each element in 'a'.

__Initializing Two-Dimensional Arrays__

Multidimensional arrays may be initialized by specifying bracketed values for each row. Following is an array with 3 rows and each row has 4 columns.
```C
int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};
```
The nested braces, which indicate the intended row, are optional. The following initialization is equivalent to the previous example:
```C
int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
```
__Accessing Two-Dimensional Array Elements__

An element in a two-dimensional array is accessed by using the subscripts, i.e., row index and column index of the array. For example:
```C
int val = a[2][3];
```
The above statement will take the 4th element from the 3rd row of the array. You can verify it in the above figure. Let us check the following program where we have used a nested loop to handle a two-dimensional array:
```C
#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 2 columns*/
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
   
   return 0;
}
```
When the above code is compiled and executed, it produces the following result:
```C
a[0][0]: 0
a[0][1]: 0
a[1][0]: 1
a[1][1]: 2
a[2][0]: 2
a[2][1]: 4
a[3][0]: 3
a[3][1]: 6
a[4][0]: 4
a[4][1]: 8
```
Source:

[Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)

__Q3. What are the most common C standard library functions to manipulate strings__

For strings there's one important standard library that is provided by C: string.h.

This library is essential because it abstracts many of the low level details of working with strings, and provides us with a set of useful functions.

You can load the library in your program by adding on top:
```C
#include <string.h>
```
And once you do that, you have access to:

- strcpy() to copy a string over another string
- strcat() to append a string to another string
- strcmp() to compare two strings for equality
- strncmp() to compare the first n characters of two strings
- strlen() to calculate the length of a string

and many more.

Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

## Quiz answers

__Question #0__

What is the size of ``p`` in this code? (64-bit architecture)
```C
int *p; 
```
**8 bytes**

__Question #1__

What is the size of ``p`` in this code? (64-bit architecture)
```C
int **p;
```
**8 bytes**

__Question #2__

In this following code, what is the value of ``a[0][0]``?
```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**1**

__Question #3__

In this following code, what is the value of ``a[3][0]``?
```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**7**

__Question #4__

In this following code, what is the value of ``a[3][1]``?
```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
**8**

__Question #5__

In this following code, what is the value of ``a[1][1]``?
```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```
 **4**

__Question #6__
What is the size of *p in this code?
```C
int **p; 
```
 **8 bytes**

__Question #7__

What is the size of ``*p`` in this code? (32-bit architecture)
```C
int *p;
```
**4 bytes**

__Question #8__

What is stored inside a pointer to a pointer to an int?
- An address where an address is stored

[Go up](#table-of-contents)
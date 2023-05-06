# C - Pointers, arrays and strings
## Resources
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Learning Objectives

__Q1. What are pointers and how to use them__

A pointer is the address of a block of memory that contains a variable.

When you declare an integer number like this:
```C
int age = 37;
```
We can use the `&` operator to get the value of the address in memory of a variable:
```C
printf("%p", &age); /* 0x7ffeef7dcb9c */
```

The %p format specified in printf() is used to print the address value.

We can assign the address to a variable:
```C
int *address = &age;
```
Using int *address in the declaration, we are not declaring an integer variable, but rather a pointer to an integer.

We can use the __pointer operator__ `*` to get the value of the variable an address is pointing to:
```C
int age = 37;
int *address = &age;
printf("%u", *address); /* 37 */
```
This time we are using the pointer operator again, but since it's not a declaration this time it means "the value of the variable this pointer points to".

In this example we declare an age variable, and we use a pointer to initialize the value:
```C
int age;
int *address = &age;
*address = 37;
printf("%u", *address);
```
Source:
- [The C Beginner's Handbook](https://www.freecodecamp.org/news/the-c-beginners-handbook/#conditionals)

__Q2. What are arrays and how to use them__

An array is a `data structure`, which can store a __fixed-size__ collection of elements of the __same data type__. 

An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number1, number2, ..., number99, you just declare one array variable number of integer type and use number1[0], number1[1], and ..., number1[99] to represent individual variables. Here, 0, 1, 2, .....99 are index associated with var variable and they are being used to represent individual elements available in the array.

All arrays consist of __contiguous memory locations__. The lowest address corresponds to the first element and the highest address to the last element.

<img alt="array" src="https://www.tutorialspoint.com/computer_programming/images/arrays.jpg">

__Create Arrays__

To create an array variable in C, a programmer specifies the type of the elements and the number of elements to be stored in that array. Given below is a simple syntax to create an array in C programming −
```C
type arrayName [ arraySize ];
```
This is called a `single-dimensional array`. The __arraySize__ must be an integer constant greater than zero and type can be any valid C data type. For example, now to declare a 10-element array called number of type int, use this statement −
```C
int number[10];
```
Here, __number__ is a variable array, which is sufficient to hold up to 10 integer numbers.

__Initializing Arrays__

You can initialize an array in C either one by one or using a single statement as follows −
```C
int number[5] = {10, 20, 30, 40, 50};
```
The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].

If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −
```C
int number[] = {10, 20, 30, 40, 50};
```
You will create exactly the same array as you did in the previous example. 

The following is an example to assign a single element of the array −
```C
number[4] = 50;
```
The above statement assigns element number 5th in the array with a value of 50. 

All arrays have `0` as the index of their first element which is also called the base index and the last index of an array will be the total size of the array minus 1. 

__Accessing Array Elements__

An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example −
```C
int var = number[9];
```
The above statement will take the 10th element from the array and assign the value to __var__ variable. 

Source:
- [www.tutorialspoint.com](https://www.tutorialspoint.com/computer_programming/computer_programming_arrays.htm)

__Q3. What are the differences between pointers and arrays__

|Pointer|Array|
|--|--|
|It is declared as: *var_name;|It is declared as: data_type var_name[size];|
|It is used to store the address of different variables of the same data type.|It is used to store the multiple variable of same data type|
|It is designed to store the address of variable|It is designed to store the value of variable.|
|A pointer variable can store the address of only one variable at a time.|A array can store the number of elements the same size as the size of the array variable.|

Source:
- [www.geeksforgeeks.org](https://www.geeksforgeeks.org/difference-pointer-array-c/)

__Q4. How to use strings and how to manipulate them__

In C, strings are one special kind of array: __a string is an array of char values__:
```C
char name[7];
```
The char type is commonly used to store letters of the ASCII table.

A string can be initialized like you initialize a normal array:
```C
char name[7] = { "F", "l", "a", "v", "i", "o" };
```

Or more conveniently with a string literal (also called string constant), a sequence of characters enclosed in double quotes:
```C
char name[7] = "Flavio";
```
You can print a string via printf() using %s:
```C
printf("%s", name);
```
Do you notice how "Flavio" is 6 chars long, but I defined an array of length 7? `Why?` This is because __the last character in a string must be a  0 value, the string terminator__, and we must make space for it.

This is important to keep in mind especially when manipulating strings.

Speaking of manipulating strings, there's one important standard library that is provided by C: string.h.

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
 
 What is the size of a pointer to a ``char`` (on a 64-bit architecture)
- 8 bytes

__Question #1__
 
 What is the size of a pointer to an ``int`` (on a 64-bit architecture)
- 8 bytes

__Question #2__
 
If we have a variable called ``var`` of type ``int``, how can we get its address in memory?
- &var

__Question #3__

What is the identifier to print an address with ``printf``?
- %p

__Question #4__

The process of getting the value that is stored in the memory location pointed to by a pointer is called:
- Dereferencing

__Question #5__
 
 Is it possible to declare a pointer to a pointer?
- yes

__Question #6__
 
 What happens when one tries to access an illegal memory location?
- Segmentation fault

__Question #7__
 
 What is the value of ``n`` after the following code is executed?
```C
int n = 98;
int *p = &n;
```
**98**

__Question #8__
 
 What is the value of ``n`` after the following code is executed?
```C
int n = 98;
int *p = &n;

p = 402;
```
**98**

__Question #9__

What is the value of ``n`` after the following code is executed?
```C
int n = 98;
int *p = &n;

*p = 402;
```
**402**

__Question #10__

What is the value of ``n`` after the following code is executed?
```C
int n = 98;
int *p = &n;

*p++;
```
**98**

__Question #11__

We declare the following variable
```C
int arr[5];
```
What is the size in memory of the variable `arr`?
- **20 bytes**

__Question #12__
 
 We declare the following variable
```C
int arr[5];
```
What is the equivalent of typing arr[2]?
- ***(arr + 2)**

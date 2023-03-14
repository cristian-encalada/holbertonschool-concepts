# C - Functions, nested loops
## Resources
- [x] [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss&ab_channel=ZackAnnaTutorials)
- [x] [C - Functions](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [x] [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [x] [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [x] [C - Header files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
## Learning Objectives
### General
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags ``-Wall -Werror -pedantic -Wextra -std=gnu89``
* What are header files and how to to use them with ``#include``
## Quiz answers
* Question #0
What is the output of the following piece of code?
```
int i;

for (i = 48; i < 58; i++)
{
    printf("%c", i);
}
```
0123456789
* Question #1
What is the output of the following piece of code?
```
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}
```
0101010101
* Question #2
What is the output of the following piece of code?
```
int i;

for (i = 0; i < 10; i++)
{
    printf("%d", i * 2);
}
```
024681012141618
* Question #3
What is the output of the following piece of code?
```
int i;

i = 0;
while (i < 10)
{
    i++;
    printf("%d", i / 2);
}
```
0112233445
* Question #4
What is the output of the following piece of code?
```
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
```
987654321
* Question #5
What is the output of the following piece of code?
```
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}
```
876543210
* Question #6
What is the output of the following piece of code?
```
int i;

i = 9;
while (--i)
{
    printf("%d", i);
}
```
87654321
* Question #7
What is the return value of the following function?
```
int some_function(void)
{
    printf("%d", 12);
    return (98);
}
```
98
* Question #8
What is the return value of the following function?
```
int some_function(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return(i);
}
```
10

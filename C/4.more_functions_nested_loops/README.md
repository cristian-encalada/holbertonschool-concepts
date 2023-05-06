# C - Functions, nested loops

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss&ab_channel=ZackAnnaTutorials)
- [C - Functions](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw&ab_channel=JonathanEngelsma)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

## Quiz answers

__Question #0__

What is the output of the following piece of code?
```c
int i;

for (i = 48; i < 58; i++)
{
    printf("%c", i);
}
```

__Answer: 0123456789__

__Question #1__

What is the output of the following piece of code?
```C
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}
```
__Answer: 0101010101__

__Question #2__

What is the output of the following piece of code?
```C
int i;

for (i = 0; i < 10; i++)
{
    printf("%d", i * 2);
}
```
**Answer: 024681012141618**

__Question #3__

What is the output of the following piece of code?
```C
int i;

i = 0;
while (i < 10)
{
    i++;
    printf("%d", i / 2);
}
```
**Answer: 0112233445**

__Question #4__

What is the output of the following piece of code?
```C
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
```
**Answer: 987654321**

__Question #5__

What is the output of the following piece of code?
```C
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}
```
**Answer: 876543210**

__Question #6__

What is the output of the following piece of code?
```C
int i;

i = 9;
while (--i)
{
    printf("%d", i);
}
```
**Answer: 87654321**

__Question #7__

What is the return value of the following function?
```C
int some_function(void)
{
    printf("%d", 12);
    return (98);
}
```
**Answer: 98**

__Question #8__

What is the return value of the following function?
```C
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
**Answer: 10**

[Go up](#table-of-contents)

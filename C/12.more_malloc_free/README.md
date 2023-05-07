# C - More malloc, free

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

## Learning Objectives

Q1. How to use the ``exit`` function

Q2. What are the functions ``calloc`` and ``realloc`` from the standard library and how to use them

## Quiz answers

__Question #0__

To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:
- malloc(10 * sizeof(int))

__Question #1__

If I want to copy the string “Best School” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):
- malloc(sizeof(“Best School”))
- malloc(12)
- malloc(strlen(“Best School”) + 1)

__Question #2__

malloc returns a pointer
- True

__Question #3__

malloc returns an address
- True

__Question #4__

What is wrong with this code:
```C
int cp(void)
{
    char *s;

    s = malloc(12);
    strcpy(s, "Best School");
    return (0);
}
```
- There is no comment
- malloc can fail so we should check its return value all the time before using the pointers returned by the function.

__Question #5__

You can do this:
```C
free("Best School");
```
* Answer: No

__Question #6__

You can do this:
```C
char str[] = "Best School";

free (str);
```
* Answer: No

__Question #7__

You can do this:
```C
char *s;

s = strdup("Best School");
if (s != NULL)
{
    free(s);
}
```
- Yes

__Question #8__

The memory space reserved when calling malloc is on:
- The heap

__Question #9__

What will you see on the terminal?
```C
int main(void)
{
    int *ptr;

    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}
```
- Segmentation Fault

[Go up](#table-of-contents)
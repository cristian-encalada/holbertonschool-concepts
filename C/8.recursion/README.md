# C - Recursion

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc&ab_channel=Computerphile)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k&ab_channel=iTzAdam5X)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs&ab_channel=iTzAdam5X)

## Learning Objectives

__Q1. What is recursion__

Recursion is the process of repeating items in a self-similar way. 

In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.
```C
void recursion() {
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
```
The C programming language supports recursion, i.e., a function to call itself. But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

Source:

[C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)

__Q2. How to implement recursion__

__Steps to come up with a Recursive Solution__

1. Try and break down the problem into subproblems.
2. Once you have the subproblems figured out, think about what information from the call to the subproblems can you use to solve the task at hand. 

    For example, the factorial of N — 1 to find the factorial of N , height of the left and right subtrees to find the height of the main tree, and so on.
3. Keep calm and trust recursion! Assume that your recursive calls to the subproblems will return the information you need in the most optimal fashion.

4. The final step in this process is actually using information we just got from the __subproblems__ to find the solution to the main problem. Once you have that, you’re ready to code up your recursive solution.

Source:

[Recursion Demystified](https://www.freecodecamp.org/news/recursion-demystified-99a2105cb871/)

__Q3. In what situations you should implement recursion__

Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.

Why & Why Not Recursion
|Pros|Cons|
|--|--|
|Bridges the gap between elegance and complexity|Slowness due to CPU overhead|
|Reduces the need for complex loops and auxiliary data structure|Can lead to out of memory errors/stack overflow exepctions|
|Can reduce time complexity easily with __memoization__|Can be unnecessarily complex if poorly constructed|
|Works reallu well with recursive structures likes tress and graphs|--|

Source:

[Understanding Recursion in Programming](https://www.freecodecamp.org/news/understanding-recursion-in-programming/)

__Q4. In what situations you shouldn’t implement recursion__

Let's first discuss the steps performed when a function is called:

1. Space is made on the stack for the function's arguments and local variables
2. Function's arguments are copied into this space
3. Function's code executes
4. Stack goes to its previous position

Doing all of these takes a little bit more time than iterating through a loop but the real problem with recursion is the first step. 

__Every time a recursive call is made, a stack space is allocated__ to store the local variables and because of this, the program may cause stack overflow problem if the recursive call is large in number.

Let's write a recursive function to calculate the factorial of a number.
```C
fac(int n)
  if (n == 0 OR n == 1)
    return 1
  else
    return a*fac(a-1)
```
Calculating 1000! with this program will use 1000 stack frames.
```C
fac(int n)
  i = 1;
  while n>1
    i = i*n
    n = n-1
  return
  ```
But the iterative solution will mainly use just one stack frame.

Let's take an example of calculating the Fibonacci series.
```C
fib(int n)
  if (n == 0 OR n == 1)
    return 1
  else
    return fib(n-1)+fib(n-2)
```
This is the natural way of writing the Fibonacci series because according to the definition a Fibonacci number is 1 if 'n' is 0 or 1. Else it is f(n-1)+f(n-2) and the above code represents this in the most natural way. 

But the major problem with this is that the same value will be calculated again and again for calculation of a Fibonacci term and this will take more time and more importantly, more stack space. For example, let's calculate fib(5) with the above-given algorithm.

<img alt="Fibonacci_recursion" src="https://www.dl.dropboxusercontent.com/s/7i94684rdt0qipv/no_recur.png?dl=0">

So even though recursion represented the algorithm in a natural way, it is very inefficient in this case.

__Conclusion:__

`If simplicity is required and memory overflow is not a major issue then use recursion otherwise go with iterations`.

Source:

[When not to use recursion](https://www.codesdope.com/blog/article/when-not-to-use-recursion)

## Quiz answers

__Question #0__

What does this code print?
```C
void print(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(2);
    return (0);
}
```
**21**

__Question #1__

What does this code print?
```c
void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```
**4321**

__Question #2__

What does this code print?
```C
void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```
**456789**

__Question #3__

What does this code print?
```C
void print(int nb)
{
    if (nb < 0) 
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print(nb);
}

int main(void)
{
    print(4);
    return (0);
}
```
**43210**

__Question #4__

What does this code print?
```C
int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
```
**00246**

[Go up](#table-of-contents)
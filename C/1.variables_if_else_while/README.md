# C - Variables, if, else, while

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources
-    [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
-    [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
-    [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
-    [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
-    [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
-    [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
-    [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
-    [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
-    [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI&ab_channel=Simplified)

## Learning Objectives

__Q1. What are the arithmetic operators and how to use them__

__Operator in Computer Programming__

In computer programing, an operator is a character, symbol, keyword, or combination of those. It determines what action gets performed on one or more operands.

__An operand__ is an individual data item that gets manipulated by the operator.

__Types of Operators in C Programming__

__1. Unary operators__. Operate on a single operand.

Some of the unary operators in C are:
- Arithmetic operators such as the increment operator(++) and the decrement operator(--).
- Logical operators like the NOT(!) operator. 
- Bitwise operators like the NOT(~).

__2. Binary operators__. Operate on two operands. Some of the binary operators in C are:

- Arithmetic operators (+, -, *, /, %). 
- Equality/Relational operators (==, !=, >, <, >=, <=). 
- Logical/Conditional operators such as the AND(&&) and OR(||) operators.
- Bitwise operators ((&, |, ^, <<, >>)
- Assignment operators (=, +=, -=, *=, /=, %=),

__3. Ternary operators__ Operates on three operands. The general syntax looks something similar to the following:
```
(condition) ? expression1 : expression2;
```

That being sad, __Binary arithmetic operators__ (+, -, *, /, %) perform mathematical calculations on numerical data such as addition, subtraction, multiplication, division, and finding the remainder.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q2. What are the logical operators (sometimes called boolean operators) and how to use them?__

The logical operators evaluate the logical expression and return a result.

A logical expression is a combination of logical operators with one or multiple conditions.

The result is always a Boolean value. A Boolean value determines whether the expression is true or false.

There are three logical operators in C programming: `logical AND(&&)`, `logical OR(||)`, and `logical NOT (!)`.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q3. What the the relational operators? How to use them__

Equality/Relational operators (==, !=, >, <, >=, <=). Compare two values and determine if one operand is greater than, less than, equal to, or not equal to the other operand.

Source:
- [C Operators - Freecodecamp](https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/)

__Q4. What values are considered TRUE and FALSE in C__

__Q5. What are the boolean operators and how to use them__

__Q6. How to use the ``if, if ... else statements``__

__Q7. How to use comments__

__Q8. How to declare variables of types ``char, int, unsigned int``__

__Q9. How to assign values to variables__

__Q10. How to print the values of variables of type ``char, int, unsigned int`` with ``printf``__

__Q11. How to use the ``while`` loop__

__Q12. How to use variables with the ``while`` loop__

__Q13. How to print variables using ``printf``__

__Q14. What is the ``ASCII`` character set__

__Q15. What are the purpose of the ``gcc`` flags ``-m32`` and ``-m64``__

## Quiz answers

__Question #0__

What is the size of the ``unsigned int`` data type?

- 4 bytes

__Question #1__

What is the size of the ``char`` data type?
- 1 byte

__Question #2__

What is the size of the ``float`` data type?
- 4 bytes

__Question #3__

Which of the following are valid ``if`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```
if (a > b)
{
  return (a);
}
```

```
if (a > b)
  return (a);
```
__Question #4__

Which of the following are valid ``for`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```

for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```

```
for (a = 0; a < b; a++)
    printf("%d\n", a);
```

```
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```

__Question #5__

Which of the following are valid ``while`` or ``do/while`` statements in ANSI C and Betty-compliant? (Considering ``a`` and ``b`` two variables of type ``int``)

```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
while (a < b)
    printf("%d\n", a++);
```
[Go up](#table-of-contents)
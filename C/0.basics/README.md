# C - Basics
## Resources
- [x] [Everything you need to know to start with C.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230314%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230314T191353Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=dd8451df3d69046097e02b0d7d19684b18e2db50d285db77689c66f8939721f2) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [x] [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [x] [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M&ab_channel=Computerphile)
- [x] [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc&ab_channel=ChrisHawkes)
- [x] [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ&ab_channel=JonathanEngelsma)
- [x] [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU&ab_channel=JonathanEngelsma)
- [x] [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&ab_channel=HowTo)
- [x] [Betty Coding Style](https://github.com/hs-hq/Betty/wiki)
- [x] [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
- [x] [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)
## Learning Objectives

__Q1. Why C programming is awesome?__

Because C is very flexible, and machine independent, it means that the code can run on any machine without making any change or just a few changes in the code.

__Q2. Who invented C?__

Dennis Ritchie.

__Q3. Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds?__

- __Dennis Ritchie__ (1941 – 2011) was an American computer scientist.  He is most well known for creating the __C programming language__ and, with Ken Thompson, the __Unix operating system__ and B programming language.

- __Brian Kernighan__ (1942 - Presemt) is a Canadian computer scientist. He worked at Bell Labs and contributed to the __development of Unix__ alongside Unix creators Ken Thompson and Dennis Ritchie. Kernighan's name became widely known through co-authorship of the __first book on the C programming language__ (The C Programming Language) with Dennis Ritchie.

- __Linus Benedict Torvalds__ (1969 - Present) is a Finnish software engineer who is the creator and, historically, the lead developer of the __Linux kernel__, used by Linux distributions and other operating systems such as Android. He also created the distributed version control system __Git__.

__Q4. What happens when you type ``gcc main.c``?__

The GCC (GNU Compiler Collection) program will be invoked to compile the main.c file.

gcc will read the main.c file and generate an object file (main.o) that contains the compiled machine code for the program.

If the compilation is successful, gcc will link the object file with any required libraries to produce an executable file. The executable file will typically have the same name as the source file but without the .c extension (i.e., main).

__Q5. What is an entry point?__

In C, the entry point is the starting point of a program's execution, which is a function called main(). 

Every C program must have a main() function, which is the first function to be called when the program is executed.

__Q6. What is ``main``?__

The main() function is the entry point of a C program, where the program execution begins and where the initial code is executed.

The standard syntax for the main() function is:

```C
int main(void)
{
    /* Main program code */
    return (0);
}
```
The `return (0)`; statement at the end of main() indicates that the program has executed successfully. A non-zero return value indicates an error or abnormal termination of the program.

__Q7. How to print text using ``printf``, ``puts`` and ``putchar``?__

In C, there are several ways to print text to the console or terminal. Three commonly used functions for printing text in C are printf, puts, and putchar.

1. `printf` function:

The printf function is a versatile function for printing formatted text. It allows you to print variables, expressions, and text with various formatting options. Here is an example of using printf to print a message to the console:

```C
#include <stdio.h>

int main()
{
    printf("Hello, world!\n");
    return 0;
}
```
In the above code, printf is used to print the string "Hello, world!" followed by a newline character (\n). The %s format specifier is used to print a string.

2. `puts` function:

The puts function is a simpler function for printing text. It automatically appends a newline character to the end of the text being printed. Here is an example of using puts to print a message to the console:

```C
#include <stdio.h>

int main()
{
    puts("Hello, world!");
    return 0;
}
```

In the above code, puts is used to print the string "Hello, world!" followed by a newline character.

3. `putchar` function:

The putchar function is used to print a single character to the console. Here is an example of using putchar to print the characters 'H', 'e', 'l', 'l', 'o', and '!' to the console:

```C
#include <stdio.h>

int main() {
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('!');
    putchar('\n');
    return 0;
}
```
In the above code, putchar is used to print each character of the string "Hello!" followed by a newline character.

__Q8. How to get the size of a specific type using the unary operator ``sizeof``?__

 To get the size of a specific type using the unary operator sizeof, use the following syntax:
```
sizeof(type)
```
Here, type is the name of the data type for which you want to determine the size. 

For example, to get the size of an integer (int) type,  use:

```C
sizeof(int)
```
This will return the `size of` the integer type in `bytes`.

__Q9. How to compile using ``gcc``__

Use the following command:

```
gcc source_file.c -o output_file
```
Here, `source_file.c` is the name of the source file containing the C code to compile, and `output_file` is the name of the executable file that will be generated by the compiler.

__Q10. What is the default program name when compiling with ``gcc``__

It's also possible to compile without flags
```
gcc source_file.c
```
In this case, the default name of executable file will be `a.out`.

The name `a.out` is short for "assembler output", which is a historical artifact from the early days of computing.


__Q11. What is the official C coding style and how to check your code with ``betty-style``?__

The official C coding style is a set of guidelines for writing C code that is easy to read, maintain, and understand. 

One popular tool for checking C code against these guidelines is betty-style.

Take a look at:
- [betty-style-documentation](https://github.com/holbertonschool/Betty/wiki)

- [betty-style-repository](https://github.com/hs-hq/Betty)

__Q12. How to find the right header to include in your source code when using a standard library function__

 Refer to the documentation for the library function, it means checking the manual.
 
 For example, to use the `strlen` function, first check the manual executing the command 
 ```
 man strlen
 ```
 Then check the synopsis section:
```
SYNOPSIS
       #include <string.h>
       size_t strlen(const char *s);
```
The header file to be included in order to use a particular library function  has a .h extension. In this case the header file `string.h` must be included at the beggining of the file to use the function `strlen`.

__Q13. How does the ``main`` function influence the return value of the program__

The main function is the entry point of a C program, and its return value is used to indicate the status of the program to the operating system. 

By convention, a __return value of 0__ from the main function __indicates successful execution__ of the program, while a __non-zero value__ indicates an __error or abnormal termination__.

For example, the following code would exit the program with a status of 0:

```C
int main()
{
    /* program code */
    return 0;
}
```
While this code would exit with a status of 1:

```C
int main()
{
    /* program code */
    return 1;
}
```
Another example is reviewing the `exit status` in the manual reference for `ls`:
```
man ls
```
Here we can see different exit status codes:
```
   Exit status:
       0      if OK,

       1      if minor problems (e.g., cannot access subdirectory),

       2      if serious trouble (e.g., cannot access command-line argument).

```

## Quiz answers

__Question #0__
 
 In which category belongs the C programming language?

- Compiled language

__Question #1__

What is the common extension for a C source file?

- .c

__Question #2__

What is the common extension for a C header file?

- .h

__Question #3__

Which command can be used to compile a C source file?

- gcc

__Question #4__

Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?

```
/* Comment */ 
```
```
/*
 * Comment
 */
```

__Question #5__

What are the different steps to form an executable file from C source code

- Preprocessing, compilation, assembly, and linking

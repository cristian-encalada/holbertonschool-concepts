# C - Static libraries

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)


## Resources
- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library](https://www.youtube.com/watch?v=eW5he5uFBNM&ab_channel=HowTo)

## Learning Objectives

__Q1. What is a static library, how does it work, how to create one, and how to use it__

__What is a library and what is it good for?__

A library is a collection of code routines (functions, classes, variables, and so on) that can be called upon when building our program, so instead of writing it ourselves, we can go and get it from something that has already been written and optimized. 

That is where the idea behind libraries comes from. We are reusing blocks of codes that have come from somewhere else.

Basically, we have two kinds of libraries:

- static libraries
- shared (or dynamic) libraries

The main reason for writing a library is to __allow code reusability__, thus save considerable development time.

__What is a static library and how does it work?__

A static library is a file containing a collection of object files (*.o) that are linked into the program during the linking phase of compilation and are not relevant during runtime.

<img alt="static_library" src="https://res.cloudinary.com/practicaldev/image/fetch/s--m6UdcE24--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/l38vk6qbwisj20wzcbjz.PNG">

Basically, static libraries are just a collection of object files that are merged by the linker with another object file to form a final executable.

Conventionally, they start with “lib” and end with “.a” or “.lib” (depending on your platform).

__How to create static libraries?__

To create a static library, we need to specify to the compiler, which is GCC in our case, that we want to compile all library codes (*.c) into object files (*.o) without linking. To do that we are going to use the command below.

```shell
$ gcc -c -Wall -Werror -Wextra *.c
```
__Flags description:__

-c: Compile and assemble, but do not link.

-Wall, -Werro and -Wextra: These aren’t necessary but they are recommended to generate better code.

Note that the `*.c` matches all files in the current working directory with the `.c` extension.

Once we have object file(s), we can now bundle all object files into one static library.

To create a static library or to add additional object files to an existing static library, we have to use the GNU ar (archiver) program. We can use a command like this:

```C
$ ar -rc libname.a *.o
```

This command creates a static library named "libname.a" and puts copies of the object files `.o` in it. 

The 'c' flag tells ar to create the library if it doesn't already exist. 

The 'r' flag tells it to insert object files or replace existing object files in the library, with the new object files.

After an archive is created or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library and to make sure that the order of the symbols in the library will not matter during compilation. 

There are two ways to create or update the index. 

The first one is, by using the command ranlib.
```
$ ranlib libname.a
```
or by adding an extra flag (-s) to the ar command and it becomes like this:
```
$ ar -rcs libname.a *.o
```
Source:

[All you need to know about C Static libraries](https://www.youtube.com/watch?v=eW5he5uFBNM&ab_channel=HowTo)

## Quiz answers

__Question #0__

What command is used to create a static library from object files?
- ar

__Question #1__

What is the point of using ``ranlib``?
- Indexing an archive

__Question #2__

What command(s) can be used to list the symbols stored in a static library?
- nm
- ar

__Question #3__

What is the format of a static library?
- An archive

[Go up](#table-of-contents)
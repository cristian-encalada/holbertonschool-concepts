# C - Makefiles

## Table of contents
   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   
## Resources

- [Makefiles tuturial](https://makefiletutorial.com/)

## Learning Objectives

### General

__Q1. What are `make`, `Makefiles`__

__Make Utility__

The `make utility` is a software tool for managing and maintaining computer programs consisting many component files. 

The make utility automatically determines which pieces of a large program need to be
__recompiled__, and issues commands to recompile them.

`Make` reads its instruction from `Makefile`(called the descriptor file) by default. 

__Makefile__

`Makefile` is a way of __automating__ software building procedure and other complex tasks with dependencies.

Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.

Makefile contains: dependency rules, macros and suffix(or implicit) rules. 

Source:
- [www3.nd.edu](https://www3.nd.edu/~zxu2/acms60212-40212/Makefile.pdf)

__Q2. When, why and how to use Makefiles__

`Makefiles` are used to help decide which parts of a large program need to be recompiled. 

`Make` can also be used beyond compilation too, when you need a series of instructions to run depending on what files have changed. 

__Alternatives to Make__

Popular C/C++ alternative build systems are:
- [SCons](https://scons.org/)
- [CMake](https://cmake.org/)
- [Bazel](https://bazel.build/)
- [Ninja](https://ninja-build.org/)

Some code editors like [Microsoft Visual Studio](https://visualstudio.microsoft.com/) have their own built in build tools. 

For Java, there are:
- [Ant](https://ant.apache.org/)
- [Maven](https://maven.apache.org/what-is-maven.html)
- [Gradle](https://gradle.org/)

Interpreted languages like Python, Ruby, and Javascript don't require an analogue to Makefiles. 

The goal of Makefiles (in compiled languages) is to compile whatever files need to be compiled, based on what files have changed. But __when files in interpreted languages change, nothing needs to get recompiled__. When the program runs, the most recent version of the file is used.

Source:
- [https://makefiletutorial.com/](https://makefiletutorial.com/)

__Q3. What are rules and how to set and use them__

A rule in the makefile tells Make how to execute a series of commands in order to build a target file from source files. It also specifies a list of dependencies of the target file. 

This list should include all files (whether source files or other targets) which are used as inputs to the commands in the rule.

Here is what a simple rule looks like:
```make
target:   dependencies ...
          commands
          ...
```
For example, the following rule builds an object file from a C source file:
```make
myprog.o: myprog.c
    gcc -c myprog.c -o myprog.o
```
In this example, `myprog.o` is the target, `myprog.c` is the dependency, and the command is `gcc -c myprog.c -o myprog.o.`

Source:
- [www.gnu.org](https://www.gnu.org/software/make/)

__Q4. What are explicit and implicit rules__

In Makefiles, there are two types of rules: explicit rules and implicit rules.

1. __Explicit Rules__: An explicit rule is a rule that specifies how to build a target __explicitly__. It defines a target, its dependencies, and the commands to build the target. 

Explicit rules are useful when you need to specify the exact commands to build a target.

Here is an example of an explicit rule:
```make
target: dependency1 dependency2
    command1
    command2
```
In this example, `target` is the file to be built, and `dependency1` and `dependency2` are the files on which the target depends. `command1` and `command2` are the shell commands to be executed to build the target.

2. __Implicit Rules__: An implicit rule is a rule that specifies a general pattern for building a class of targets. It defines a target pattern, its dependencies, and a set of commands to build the targets that match the pattern. 

Implicit rules are useful when you have many targets that follow the same pattern and require the same set of commands to be built.
Here is an example of an implicit rule:

```
%.o: %.c
    command1
    command2
```

In this example, `%` is a __wildcard__ that matches any string. This rule defines a pattern for building object files from C source files. For example, myprog.o would match this pattern and be built using command1 and command2.

When a target does not have an explicit rule, Makefile searches for an implicit rule that matches the target's name. If it finds a match, it uses the implicit rule to build the target.

In summary, __explicit rules__ define how to build a __specific target__, while __implicit rules__ define a __pattern for building__ a class of __targets__.

Source:
- [https://makefiletutorial.com/](https://makefiletutorial.com/)

__Q5. What are variables and how to set and use them__

Variables in Makefiles are used to store values that can be referenced in the Makefile, allowing us to write more flexible and maintainable build rules.

To define a variable in a Makefile, you can use the following syntax:

```make
VARIABLE_NAME = value
```

For example, to define a variable named CC that contains the name of the C compiler, you can use:

```make
CC = gcc
```
To reference a variable in a Makefile, you can use the following syntax:
```make
$(VARIABLE_NAME)
```
For example, to use the CC variable defined above in a rule that compiles a C file, you can use:

```make
myprog.o: myprog.c
    $(CC) -c myprog.c -o myprog.o
```
When this rule is executed, `$(CC)` is replaced with the value of `CC` (which is `gcc`), and the resulting command becomes:
```C
gcc -c myprog.c -o myprog.o
```
Sources:
- [https://makefiletutorial.com/](https://makefiletutorial.com/)
Source:
- [www.gnu.org](https://www.gnu.org/software/make/)

[Go up](#table-of-contents)

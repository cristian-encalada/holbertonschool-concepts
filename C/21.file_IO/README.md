# C - File I/O

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Quiz Answers](#quiz-answers)

## Resources

* [File Descriptors](https://en.wikipedia.org/wiki/File_descriptor)
* [https://en.wikipedia.org/wiki/File_descriptor](https://www.youtube.com/watch?v=WxNSJAbQ8Ik)

## Learning Objectives

* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls ``open``, ``close``, ``read`` and ``write``
* What are and how to use the flags ``O_RDONLY``, ``O_WRONLY``, ``O_RDWR``
* What are file permissions, and how to set them when creating a file with the ``open`` system call
* What is a system call
* What is the difference between a function and a system call

## Quiz answers

__Question #0__

What is the `unistd` symbolic constant for the standard input?
- STDIN_FILENO

__Question #1__

What is the `unistd` symbolic constant for the standard output?
- STDOUT_FILENO

__Question #2__

What is the `unistd` symbolic constant for the standard error?
- STDERR_FILENO

__Question #3__

What is the `oflag` used to open a file with the mode read only?
- O_RDONLY

__Question #4__

What is the `oflag` used to open a file with the mode read+write?
- O_RDWR

__Question #5__

What is the correct combination of `oflag` used to open a file with the mode write only, create it if it doesn't exist and append new content at the end if it already exists?
- O_WRONYL | O_CREAT | O_APPEND

__Question #6__

Is `open` a function or a system call?
- It's a function
- It's a system call
- It's a function provided by the kernel

__Question #7__

What system call would use to write to a file descriptor?
- write

__Question #8__

Without context, no Ubuntu 20.04 LTS `write` is a...
- executable
- system call

__Question #9__

What is the return value of the system call `open` if it fails?
- -1

__Question #10__

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with `open` (if `open` succeeds of course)
- 3

__Question #11__

why? #AlwaysAskWhy
- Because the most of the time, I will already have `stdin` (value 0), `stdout` (value 1) and `stderr` (value 2) opened when my program starts executing

__Question #12__

Which of these answers are equivalent of `O_RDWR` on Ubuntu 20.04 LTS?
- 2
- 1 << 1
- 3 & 2
- (O_WRONLY << 1)

__Tips__

Use `printf` or read the headers to see the definitons/values of these macros

[Go up](#table-of-contents)
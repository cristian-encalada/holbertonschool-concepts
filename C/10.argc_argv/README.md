# C - argc, argv
## Resources
- [x] [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [x] [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [x] [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24&ab_channel=PaulProgramming)
## Learning Objectives
### General
* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use ``__attribute__((unused))`` or ``(void)`` to compile functions with unused variables or parameters
## Quiz answers
* Question #0
- What is ``argc``?
	- The number of command line arguments
	- The size of the ``argv`` array
* Question #1
- What is ``argv``?
	- An array containing the program command line arguments
	- An array of size ``argc``
* Question #2
- What is ``argv[0]``
	- The program name
* Question #3
- What is ``argv[argc]``?
	- NULL
* Question #4
- In the following command, what is argv[2]?
```
$ ./argv My School is fun
```
 **School**
* Question #5
- In the following command, what is ``argv[2]``?
```
$ ./argv "My School" "is fun"
```
**is fun**
* Question #6
- In the following command, what is argv[2]?
```
$ ./argv "My School is fun"
```
**NULL**

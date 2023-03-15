# C - malloc, free
## Resources
- [x] [0x0a - malloc & free - quick overview.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230315%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230315T005402Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c52890dfc2a61f64f21d230592589fa8c648d6f9da9dda4275b4979143407992)
- [x] [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64&ab_channel=mycodeschool)
## Learning Objectives
### General
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
## Quiz answers
* Question #0
- What is Valgrind?
	- It’s a program to validate memory allocation
* Question #1
- How many bytes will this statement allocate? 
```
malloc(sizeof(int) * 4)
```
**16**
* Question #2
- How many bytes will this statement allocate?
```
malloc(sizeof(int) * 10)
```
**40**
* Question #3
- How many bytes will this statement allocate?
```
malloc(sizeof(unsigned int) * 2)
```
**8**
* Question #4
- How many bytes will this statement allocate?
```
malloc(sizeof(char) * 10)
```
**10**
* Question #5
- How many bytes will this statement allocate?
```
malloc(10)
```
**10**
* Question #6
- How many bytes will this statement allocate?
```
malloc((sizeof(char) * 10) + 1)
```
**11**

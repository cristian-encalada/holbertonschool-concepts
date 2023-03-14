# C -Recursion
## Resources
- [x] [Recursion, introduction](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230314%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230314T232741Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=80011069ef3d1552f3b602bafdbb0627265e58d31165c7c2d130ad39de35e5b2)
- [x] [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc&ab_channel=Computerphile)
- [x] [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [x] [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k&ab_channel=iTzAdam5X)
- [x] [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs&ab_channel=iTzAdam5X)
## Learning Objectives
### General
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion
## Quiz answers
* Question #0
- What does this code print?
```
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
* Question #1
- What does this code print?
```
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
* Question #2
- What does this code print?
```
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
* Question #3
- What does this code print?
```
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
* Question #4
- What does this code print?
```
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

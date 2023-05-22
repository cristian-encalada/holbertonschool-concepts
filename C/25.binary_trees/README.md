# C - Binary Trees

## Table of contents

   * [Resources](#resources)
   * [Learning Objectives](#learning-objectives)
   * [Advanced Tasks](#advanced-tasks)

## Resources

- [Binary tree - wikipedia](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree - tutorialspoint](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal- tutorialspoint](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
- [Binary Search Tree - wikipedia](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree - Youtube](https://www.youtube.com/watch?v=H5JubkIy_p8&ab_channel=mycodeschool)

## Learning Objectives

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Advanced Tasks

__19. Lowest common ancestor__

Write a function that finds the lowest common ancestor of two nodes

- Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`
- Where `first` is a pointer to the first node
- And `second` is a pointer to the second node
- Your function must return a pointer to the lowest common ancestor node of the two given nodes
- If no common ancestor was found, your function must return `NULL`
```C
alex@/tmp/binary_trees$ cat 100-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
    binary_tree_t *ancestor;

    ancestor = binary_trees_ancestor(n1, n2);
    printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
    if (!ancestor)
        printf("(nil)\n");
    else
        printf("%d\n", ancestor->n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 128);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 45);
    root->right->right->left = binary_tree_node(root->right->right, 92);
    root->right->right->right = binary_tree_node(root->right->right, 65);
    binary_tree_print(root);

    launch_test(root->left, root->right);
    launch_test(root->right->left, root->right->right->right);
    launch_test(root->right->right, root->right->right->right);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor
alex@/tmp/binary_trees$ ./100-ancestor
       .-------(098)-------.
  .--(012)--.         .--(402)-------.
(010)     (054)     (045)       .--(128)--.
                              (092)     (065)
Ancestor of [12] & [402]: 98
Ancestor of [45] & [65]: 402
Ancestor of [128] & [65]: 128
alex@/tmp/binary_trees$
```


__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `100-binary_trees_ancestor.c`

__20. Level-order traversal__

Write a function that goes through a binary tree using level-order traversal

- Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing


```C
alex@/tmp/binary_trees$ cat 101-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_levelorder(root, &print_num);
    binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl
alex@/tmp/binary_trees$ valgrind ./101-lvl
==23445== Memcheck, a memory error detector
==23445== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==23445== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==23445== Command: ./101-lvl
==23445== 
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
402
6
56
256
512
==23445== 
==23445== HEAP SUMMARY:
==23445==     in use at exit: 0 bytes in 0 blocks
==23445==   total heap usage: 19 allocs, 19 frees, 1,197 bytes allocated
==23445== 
==23445== All heap blocks were freed -- no leaks are possible
==23445== 
==23445== For counts of detected and suppressed errors, rerun with: -v
==23445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```


__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `101-binary_tree_levelorder.c`


__21. Is complete__

Write a function that checks if a binary tree is complete

- Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return 0

```C
alex@/tmp/binary_trees$ cat 102-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int complete;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);

    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);
    complete = binary_tree_is_complete(root->left);
    printf("Is %d complete: %d\n", root->left->n, complete);

    root->right->left = binary_tree_node(root->right, 112);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    root->left->left->left = binary_tree_node(root->left->left, 8);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    root->left->right->left = binary_tree_node(root->left->right, 23);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 102-main.c 102-binary_tree_is_complete.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 102-complete
alex@/tmp/binary_trees$ ./102-complete
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 complete: 0
Is 12 complete: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (112)     (402)
Is 98 complete: 1
            .-------(098)-------.
       .--(012)--.         .--(128)--.
  .--(010)     (054)     (112)     (402)
(008)
Is 98 complete: 1
            .------------(098)-------.
       .--(012)-------.         .--(128)--.
  .--(010)       .--(054)     (112)     (402)
(008)          (023)
Is 98 complete: 0
alex@/tmp/binary_trees$
```


__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `102-binary_tree_is_complete.c`

__23. Rotate right__

Write a function that performs a right-rotation on a binary tree

- Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to rotate
- Your function must return a pointer to the new root node of the tree once rotated

```C
alex@/tmp/binary_trees$ cat 104-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 64);
    root->left->left = binary_tree_node(root->left, 32);
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    printf("\n");

    root->left->left = binary_tree_node(root->left, 20);
    root->left->right = binary_tree_node(root->left, 56);
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 104-binary_tree_rotate_right.c 104-main.c 0-binary_tree_node.c -o 104-rotr
alex@/tmp/binary_trees$ ./104-rotr
       .--(098)
  .--(064)
(032)
Rotate-right 98
  .--(064)--.
(032)     (098)

       .-------(064)--.
  .--(032)--.       (098)
(020)     (056)
Rotate-right 64
  .--(032)-------.
(020)       .--(064)--.
          (056)     (098)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `104-binary_tree_rotate_right.c`

__24. Is BST__

Write a function that checks if a binary tree is a valid [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)

- Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- Your function must return `1` if `tree` is a valid BST, and 0 otherwise
- If `tree` is `NULL`, return `0`

Properties of a Binary Search Tree:

- The left subtree of a node contains only nodes with values less than the node’s value
- The right subtree of a node contains only nodes with values greater than the node’s value
- The left and right subtree each must also be a binary search tree
- There must be no duplicate values


```C
alex@/tmp/binary_trees$ cat 110-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int bst;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);

    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d bst: %d\n", root->n, bst);
    bst = binary_tree_is_bst(root->left);
    printf("Is %d bst: %d\n", root->left->n, bst);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d bst: %d\n", root->n, bst);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 110-main.c 110-binary_tree_is_bst.c 0-binary_tree_node.c -o 110-is_bst
alex@/tmp/binary_trees$ ./110-is_bst
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 bst: 1
Is 12 bst: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 bst: 0
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `110-binary_tree_is_bst.c`

__25. BST - Insert__

Write a function that inserts a value in a Binary Search Tree

- Prototype: `bst_t *bst_insert(bst_t **tree, int value);`
- Where `tree` is a double pointer to the root node of the BST to insert the value
- And `value` is the value to store in the node to be inserted
- Your function must return a pointer to the created node, or `NULL` on failure
- If the address stored in `tree` is `NULL`, the created node must become the root node.
- If the value is already present in the tree, it must be ignored

Your file `0-binary_tree_node.c` will be compile during the correction


```C
alex@/tmp/binary_trees$ cat 111-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;
    node = bst_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 402);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 12);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 46);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 256);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 512);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 1);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Node should be nil -> %p\n", (void *)node);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c 0-binary_tree_node.c -o 111-bst_insert
alex@/tmp/binary_trees$ ./111-bst_insert
Inserted: 98
Inserted: 402
Inserted: 12
Inserted: 46
Inserted: 128
Inserted: 256
Inserted: 512
Inserted: 1
Node should be nil -> (nil)
       .-------(098)------------.
  .--(012)--.         .-------(402)--.
(001)     (046)     (128)--.       (512)
                         (256)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `111-bst_insert.c, 0-binary_tree_node.c`

__26. BST - Array to BST__

Write a function that builds a Binary Search Tree from an array

- Prototype: `bst_t *array_to_bst(int *array, size_t size);`
- Where `array` is a pointer to the first element of the array to be converted
- And `size` is the number of element in the array
- Your function must return a pointer to the root node of the created BST, or `NULL` on failure
- If a value of the array is already present in the tree, this value must be ignored

Your files `111-bst_insert.c` and `0-binary_tree_node.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 111-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;
    node = bst_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 402);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 12);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 46);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 256);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 512);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 1);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Node should be nil -> %p\n", (void *)node);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c 0-binary_tree_node.c -o 111-bst_insert
alex@/tmp/binary_trees$ ./111-bst_insert
Inserted: 98
Inserted: 402
Inserted: 12
Inserted: 46
Inserted: 128
Inserted: 256
Inserted: 512
Inserted: 1
Node should be nil -> (nil)
       .-------(098)------------.
  .--(012)--.         .-------(402)--.
(001)     (046)     (128)--.       (512)
                         (256)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `112-array_to_bst.c, 111-bst_insert.c, 0-binary_tree_node.c`

__27. BST - Search__

Write a function that searches for a value in a Binary Search Tree

- Prototype: `bst_t *bst_search(const bst_t *tree, int value);`
- Where `tree` is a pointer to the root node of the BST to search
- And `value` is the value to search in the tree
- Your function must return a pointer to the node containing a value equals to value
- If `tree` is `NULL` or if nothing is found, your function must return NULL

```C
alex@/tmp/binary_trees$ cat 113-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    bst_t *node;

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    node = bst_search(tree, 32);
    printf("Found: %d\n", node->n);
    binary_tree_print(node);
    node = bst_search(tree, 512);
    printf("Node should be nil -> %p\n", (void *)node);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search
alex@/tmp/binary_trees$ ./113-bst_search 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Found: 32
  .--(032)--.
(022)     (034)
Node should be nil -> (nil)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `113-bst_search.c`

__28. BST - Search__

Write a function that searches for a value in a Binary Search Tree

- Prototype: `bst_t *bst_search(const bst_t *tree, int value);`
- Where `tree` is a pointer to the root node of the BST to search
- And `value` is the value to search in the tree
- Your function must return a pointer to the node containing a value equals to value
- If `tree` is `NULL` or if nothing is found, your function must return NULL

```C
alex@/tmp/binary_trees$ cat 113-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    bst_t *node;

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    node = bst_search(tree, 32);
    printf("Found: %d\n", node->n);
    binary_tree_print(node);
    node = bst_search(tree, 512);
    printf("Node should be nil -> %p\n", (void *)node);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search
alex@/tmp/binary_trees$ ./113-bst_search 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Found: 32
  .--(032)--.
(022)     (034)
Node should be nil -> (nil)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `113-bst_search.c`

__29. BST - Remove__

Write a function that removes a node from a Binary Search Tree

- Prototype: `bst_t *bst_remove(bst_t *root, int value);`
- Where `root` is a pointer to the root node of the tree where you will remove a node
- And `value` is the value to remove in the tree
- Once located, the node containing a value equals to value must be removed and freed
- If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
- Your function must return a pointer to the new root node of the tree after removing the desired value

```C
alex@/tmp/binary_trees$ cat 114-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    tree = bst_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 21);
    printf("Removed 21...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 68);
    printf("Removed 68...\n");
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm
alex@/tmp/binary_trees$ valgrind ./114-bst_rm
==14720== Memcheck, a memory error detector
==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==14720== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==14720== Command: ./114-bst_rm
==14720== 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Removed 79...
                                     .------------(084)--.
                 .-----------------(047)-------.       (087)--.
       .-------(021)-------.              .--(068)          (091)-------.
  .--(002)--.         .--(032)--.       (062)                      .--(098)
(001)     (020)     (022)     (034)                              (095)
Removed 21...
                                .------------(084)--.
                 .------------(047)-------.       (087)--.
       .-------(022)--.              .--(068)          (091)-------.
  .--(002)--.       (032)--.       (062)                      .--(098)
(001)     (020)          (034)                              (095)
Removed 68...
                                .-------(084)--.
                 .------------(047)--.       (087)--.
       .-------(022)--.            (062)          (091)-------.
  .--(002)--.       (032)--.                             .--(098)
(001)     (020)          (034)                         (095)
==14720== 
==14720== HEAP SUMMARY:
==14720==     in use at exit: 0 bytes in 0 blocks
==14720==   total heap usage: 40 allocs, 40 frees, 5,772 bytes allocated
==14720== 
==14720== All heap blocks were freed -- no leaks are possible
==14720== 
==14720== For counts of detected and suppressed errors, rerun with: -v
==14720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `114-bst_remove.c`


__30. Big O #BST__

What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

- Inserting the value `n`
- Removing the node with the value `n`
- Searching for a node in a BST of size `n`

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `115-O`

__31. Is AVL__

Write a function that checks if a binary tree is a valid [AVL Tree](https://en.wikipedia.org/wiki/AVL_tree)

- Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
- Where tr`ee is a pointer to the root node of the tree to check
- Your function must return `1` if `tree` is a valid AVL Tree, and `0` otherwise
- If `tree` is `NULL`, return `0`

Properties of an AVL Tree:

- An AVL Tree is a BST
- The difference between heights of left and right subtrees cannot be more than one
- The left and right subtrees must also be AVL trees

```C
alex@/tmp/binary_trees$ cat 120-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int avl;

    root = basic_tree();

    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    avl = binary_tree_is_avl(root->left);
    printf("Is %d avl: %d\n", root->left->n, avl);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root = basic_tree();
    root->right->right->right = binary_tree_node(root->right->right, 430);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root->right->right->right->left = binary_tree_node(root->right->right->right, 420);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 120-main.c 120-binary_tree_is_avl.c 0-binary_tree_node.c -o 120-is_avl
alex@/tmp/binary_trees$ ./120-is_avl
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 avl: 1
Is 12 avl: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)--.
                              (430)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)-------.
                                .--(430)
                              (420)
Is 98 avl: 0
alex@/tmp/binary_trees$

```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `120-binary_tree_is_avl.c`

__32. AVL - Insert__

Write a function that inserts a value in an AVL Tree

- Prototype: `avl_t *avl_insert(avl_t **tree, int value);`
- Where `tree` is a double pointer to the root node of the AVL tree for inserting the value
- And `value` is the value to store in the node to be inserted
- Your function must return a pointer to the created node, or `NULL` on failure
- If the address stored in `tree` is `NULL`, the created node must become the root node.
- The resulting tree after insertion, must be a balanced AVL Tree

Your files `14-binary_tree_balance.c`, `103-binary_tree_rotate_left.c`, `104-binary_tree_rotate_right.c` and `0-binary_tree_node.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 121-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *root;
    avl_t *node;

    root = NULL;
    node = avl_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c 121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert
alex@/tmp/binary_trees$ ./121-avl_insert
Inserted: 98
(098)

Inserted: 402
(098)--.
     (402)

Inserted: 12
  .--(098)--.
(012)     (402)

Inserted: 46
  .-------(098)--.
(012)--.       (402)
     (046)

Inserted: 128
  .-------(098)-------.
(012)--.         .--(402)
     (046)     (128)

Inserted: 256
  .-------(098)-------.
(012)--.         .--(256)--.
     (046)     (128)     (402)

Inserted: 512
  .-------(098)-------.
(012)--.         .--(256)--.
     (046)     (128)     (402)--.
                              (512)

Inserted: 50
       .-------(098)-------.
  .--(046)--.         .--(256)--.
(012)     (050)     (128)     (402)--.
                                   (512)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `121-avl_insert.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 0-binary_tree_node.c`


__33. AVL - Array to AVL__

Write a function that builds an AVL tree from an array

- Prototype: `avl_t *array_to_avl(int *array, size_t size);`
- Where `array` is a pointer to the first element of the array to be converted
- And `size` is the number of element in the array
- Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
- If a value of the array is already present in the tree, this value must be ignored

Your files `121-avl_insert.c, 0-binary_tree_node.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c and 104-binary_tree_rotate_right.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 122-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_avl(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c 122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array
alex@/tmp/binary_trees$ ./122-avl_array 
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
(001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                      (095)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `122-array_to_avl.c, 121-avl_insert.c, 0-binary_tree_node.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 14-binary_tree_balance.c`

__34. AVL - Remove__

Write a function that removes a node from an AVL tree

- Prototype: `avl_t *avl_remove(avl_t *root, int value);`
- Where `root` is a pointer to the root node of the tree for removing a node
- And `value` is the value to remove in the tree
- Once located, the node containing a `value` equals to `value` must be removed and freed
- If the node to be deleted has two children, it must be replaced with its first `in-order successor` (not predecessor)
- After deletion of the desired node, the tree must be rebalanced if necessary
- Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing

Your files `14-binary_tree_balance.c, 103-binary_tree_rotate_left.c and 104-binary_tree_rotate_right.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 123-main.c
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_avl(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    tree = avl_remove(tree, 47);
    printf("Removed 47...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 32);
    printf("Removed 32...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 34);
    printf("Removed 34...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 22);
    printf("Removed 22...\n");
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c 123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm
alex@/tmp/binary_trees$ valgrind ./123-avl_rm
==15646== Memcheck, a memory error detector
==15646== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==15646== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==15646== Command: ./123-avl_rm
==15646== 
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
(001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                      (095)
Removed 47...
                 .-----------------(062)------------.
       .-------(021)-------.              .-------(084)-------.
  .--(002)--.         .--(032)--.       (068)--.         .--(091)-------.
(001)     (020)     (022)     (034)          (079)     (087)       .--(098)
                                                                 (095)
Removed 79...
                 .-----------------(062)-----------------.
       .-------(021)-------.                   .-------(091)-------.
  .--(002)--.         .--(032)--.         .--(084)--.         .--(098)
(001)     (020)     (022)     (034)     (068)     (087)     (095)
Removed 32...
                 .------------(062)-----------------.
       .-------(021)-------.              .-------(091)-------.
  .--(002)--.         .--(034)       .--(084)--.         .--(098)
(001)     (020)     (022)          (068)     (087)     (095)
Removed 34...
                 .-------(062)-----------------.
       .-------(021)--.              .-------(091)-------.
  .--(002)--.       (022)       .--(084)--.         .--(098)
(001)     (020)               (068)     (087)     (095)
Removed 22...
       .------------(062)-----------------.
  .--(002)-------.              .-------(091)-------.
(001)       .--(021)       .--(084)--.         .--(098)
          (020)          (068)     (087)     (095)
==15646== 
==15646== HEAP SUMMARY:
==15646==     in use at exit: 0 bytes in 0 blocks
==15646==   total heap usage: 48 allocs, 48 frees, 7,350 bytes allocated
==15646== 
==15646== All heap blocks were freed -- no leaks are possible
==15646== 
==15646== For counts of detected and suppressed errors, rerun with: -v
==15646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `123-avl_remove.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c`


__35. AVL - From sorted array__

Write a function that builds an AVL tree from an array

- Prototype: `avl_t *sorted_array_to_avl(int *array, size_t size);`
- Where `array` is a pointer to the first element of the array to be converted
- And `size` is the number of element in the array
- Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
- You can assume there will be no duplicate value in the array
- You are not allowed to rotate
- You can only have 2 functions in your file

Your file `0-binary_tree_node.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 124-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted
alex@/tmp/binary_trees$ ./124-avl_sorted
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `124-sorted_array_to_avl.c, 0-binary_tree_node.c`


__36. Big O #AVL Tree__

What are the average time complexities of those operations on an AVL Tree (one answer per line):

- Inserting the value `n`
- Removing the node with the value `n`
- Searching for a node in an AVL tree of size `n`

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `125-O`

__37. Is Binary heap__

Write a function that checks if a binary tree is a valid [Max Binary Heap](https://en.wikipedia.org/wiki/Binary_heap)

- Prototype: `int binary_tree_is_heap(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- Your function must return `1` if `tree` is a valid Max Binary Heap, and `0` otherwise
- If `tree` is `NULL`, return `0`

Properties of a Max Binary Heap:

- It’s a complete tree
- In a Max Binary Heap, the value at root must be maximum among all values present in Binary Heap
- The last property must be recursively true for all nodes in Binary Tree

```C
alex@/tmp/binary_trees$ cat 130-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 90);
    root->right = binary_tree_node(root, 85);
    root->left->right = binary_tree_node(root->left, 80);
    root->left->left = binary_tree_node(root->left, 79);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int heap;

    root = basic_tree();

    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    heap = binary_tree_is_heap(root->left);
    printf("Is %d heap: %d\n", root->left->n, heap);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);

    root = basic_tree();
    root->right->right = binary_tree_node(root->right, 79);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 130-main.c 130-binary_tree_is_heap.c 0-binary_tree_node.c -o 130-is_heap
alex@/tmp/binary_trees$ ./130-is_heap
       .-------(098)--.
  .--(090)--.       (085)
(079)     (080)
Is 98 heap: 1
Is 90 heap: 1
       .-------(098)-------.
  .--(090)--.         .--(085)
(079)     (080)     (097)
Is 98 heap: 0
       .-------(098)--.
  .--(090)--.       (085)--.
(079)     (080)          (079)
Is 98 heap: 0
alex@/tmp/binary_trees$

```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `130-binary_tree_is_heap.c`

__38. Heap - Insert__

Write a function that inserts a value in Max Binary Heap

- Prototype: `heap_t *heap_insert(heap_t **root, int value)`
- Where `root` is a double pointer to the root node of the Heap to insert the value
- And `value` is the value to store in the node to be inserted
- Your function must return a pointer to the created node, or `NULL` on failure
- If the address stored in `root` is `NULL`, the created node must become the root node.
- You have to respect a `Max Heap` ordering
- You are allowed to have up to `6` functions in your file

Your file `0-binary_tree_node.c` will be compiled during the correction
```C
alex@/tmp/binary_trees$ cat 131-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *root;
    heap_t *node;

    root = NULL;
    node = heap_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 131-main.c 131-heap_insert.c 0-binary_tree_node.c -o 131-heap_insert
alex@/tmp/binary_trees$ ./131-heap_insert
Inserted: 98
(098)

Inserted: 402
  .--(402)
(098)

Inserted: 12
  .--(402)--.
(098)     (012)

Inserted: 46
       .--(402)--.
  .--(098)     (012)
(046)

Inserted: 128
       .-------(402)--.
  .--(128)--.       (012)
(046)     (098)

Inserted: 256
       .-------(402)-------.
  .--(128)--.         .--(256)
(046)     (098)     (012)

Inserted: 512
       .-------(512)-------.
  .--(128)--.         .--(402)--.
(046)     (098)     (012)     (256)

Inserted: 50
            .-------(512)-------.
       .--(128)--.         .--(402)--.
  .--(050)     (098)     (012)     (256)
(046)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `131-heap_insert.c, 0-binary_tree_node.c`

__39. Heap - Array to Binary Heap__

Write a function that builds a Max Binary Heap tree from an array

- Prototype: `heap_t *array_to_heap(int *array, size_t size);`
- Where `array` is a pointer to the first element of the array to be converted
- And `size` is the number of element in the array
- Your function must return a pointer to the root node of the created Binary Heap, or `NULL` on failure

Your files `131-heap_insert.c` and `0-binary_tree_node.c` will be compiled during the correction

```C
alex@/tmp/binary_trees$ cat 132-main.c
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 132-main.c 132-array_to_heap.c 131-heap_insert.c 0-binary_tree_node.c -o 132-heap_array
alex@/tmp/binary_trees$ ./132-heap_array
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `132-array_to_heap.c, 131-heap_insert.c, 0-binary_tree_node.c`

__40. Heap - Extract__

Write a function that extracts the root node of a Max Binary Heap

- Prototype: `int heap_extract(heap_t **root);`
- Where `root` is a double pointer to the root node of heap
- Your function must return the value stored in the root node
- The root node must be freed and replace with the last `level-order` node of the heap
- Once replaced, the heap must be rebuilt if necessary
- If your function fails, return `0`

```C
alex@/tmp/binary_trees$ cat 133-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int extract;

    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 133-main.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c 3-binary_tree_delete.c -o 133-heap_extract
alex@/tmp/binary_trees$ valgrind ./133-heap_extract
==29133== Memcheck, a memory error detector
==29133== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==29133== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==29133== Command: ./133-heap_extract
==29133== 
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
Extracted: 98
                 .-----------------(095)-----------------.
       .-------(084)-------.                   .-------(091)-------.
  .--(047)--.         .--(079)--.         .--(087)--.         .--(062)--.
(032)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
Extracted: 95
                 .-----------------(091)-----------------.
       .-------(084)-------.                   .-------(087)-------.
  .--(047)--.         .--(079)--.         .--(068)--.         .--(062)
(032)     (034)     (002)     (020)     (022)     (021)     (001)
Extracted: 91
                 .-----------------(087)-----------------.
       .-------(084)-------.                   .-------(068)--.
  .--(047)--.         .--(079)--.         .--(022)--.       (062)
(032)     (034)     (002)     (020)     (001)     (021)
==29133== 
==29133== HEAP SUMMARY:
==29133==     in use at exit: 0 bytes in 0 blocks
==29133==   total heap usage: 213 allocs, 213 frees, 9,063 bytes allocated
==29133== 
==29133== All heap blocks were freed -- no leaks are possible
==29133== 
==29133== For counts of detected and suppressed errors, rerun with: -v
==29133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `133-heap_extract.c`

__41. Heap - Sort__

Write a function that converts a Binary Max Heap to a sorted array of integers

- Prototype: `int *heap_to_sorted_array(heap_t *heap, size_t *size);`
- Where `heap` is a pointer to the root node of the heap to convert
- And `size` is an address to store the size of the array
- You can assume `size` is a valid address
- Since we are using Max Heap, the returned array must be sorted in descending order

Your file `133-heap_extract.c` will be compile during the correction
```C
alex@/tmp/binary_trees$ cat 134-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int *sorted;
    size_t sorted_size;

    print_array(array, n);
    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    sorted = heap_to_sorted_array(tree, &sorted_size);
    print_array(sorted, sorted_size);
    free(sorted);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 134-main.c 134-heap_to_sorted_array.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c -o 134-heap_sort
alex@/tmp/binary_trees$ valgrind ./134-heap_sort
==46529== Memcheck, a memory error detector
==46529== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==46529== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==46529== Command: ./134-heap_sort
==46529== 
79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 20, 22, 98, 1, 62, 95
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
98, 95, 91, 87, 84, 79, 68, 62, 47, 34, 32, 22, 21, 20, 2, 1
==46529== 
==46529== HEAP SUMMARY:
==46529==     in use at exit: 0 bytes in 0 blocks
==46529==   total heap usage: 301 allocs, 301 frees, 8,323 bytes allocated
==46529== 
==46529== All heap blocks were freed -- no leaks are possible
==46529== 
==46529== For counts of detected and suppressed errors, rerun with: -v
==46529== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```
__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `134-heap_to_sorted_array.c, 133-heap_extract.c`

__42. Big O #Binary Heap__

What are the average time complexities of those operations on a Binary Heap (one answer per line):

- Inserting the value n
- Extracting the root node
- Searching for a node in a binary heap of size n

__Repo:__

- GitHub repository: `holbertonschool-binary_trees`
- File: `135-O`

[Go up](#table-of-contents)
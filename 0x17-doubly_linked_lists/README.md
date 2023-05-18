# Doubly Linked Lists

This repository contains C programs that demonstrate the implementation and manipulation of doubly linked lists. The programs are part of the ALX Low-Level Programming curriculum.


## Table of contents

1. List Print
2. List Length
3. Add Node at the Beginning
4. Add Node at the End
5. Free List
6. Get Node at Index
7. Sum List
8. Insert Node at Index


## List Print

* Prototype: `size_t print_dlistint(const dlistint_t *h)`

* Description: Print all the elements of a doubly linked list.

* Return Value: The number of nodes in the list.


## List Length

* Prototype: `size_t dlistint_len(const dlistint_t *h)`

* Description: Returns the number of elements in a doubly linked list.

* Return Value: The number of nodes in the list.


## Add Node at the Beginning

* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`

* Description: Adds a new node at the beginning of a doubly linked list.

* Return Value: The address of the new element, or `NULL` if it failed.


## Add Node at the End

* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`

* Description: Adds a new node at the end of a doubly linked list.

* Return Value: The address of the new element, or `NULL` if it failed.


## Free List

* Prototype: `void free_dlistint(dlistint_t *head)`

* Description: Free a doubly linked list.


## Get Node at Index

* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`

* Description: Returns the nth node of a doubly linked list.

* Parameters:
	* `head`: A pointer to the head of the list.
	* `index`: The index of the node (starting from 0).
* Return Value: A pointer to the nth node, or `NULL` if the node does not exist.


## Sum List

* Prototype: `int sum_dlistint(dlistint_t *head)`

* Description: Returns the sum of allthe data values (n) in a doubly linked list.

* Return Value: The sum of the data values. If the list is empty, it returns 0.


## Insert Node at Index

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`

* Description: Insert a new node at a given position in a doubly linked list.

* Parameters:
	* `h`: A pointer to a pointer to the head of the list.
	* `idx`: The index at which the new node should be inserted (starting from 0).
	* `n`: The data value to be assigned to the new node.

* Return Value: The address of the new node, or `NULL` if it failed. If it is not posiible to add the new node at the specified index, the function does not add the new node and returns `NULL`.


## Usage

To compile the program, use the following command:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main-file> <function-file> <print-file> -o <output-file>
```


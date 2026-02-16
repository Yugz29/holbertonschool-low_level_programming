# Doubly Linked Lists in C

## Overview

This directory contains an implementation of a **doubly linked list** in C.

A doubly linked list is a dynamic data structure where each node stores:

* an integer value
* a pointer to the previous node
* a pointer to the next node

This project focuses on mastering:

* pointer manipulation
* dynamic memory management (`malloc`, `free`)
* bidirectional traversal
* safe insertion and deletion logic
* handling edge cases properly

---

## Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

Each node contains:

* `n` → stored value
* `prev` → pointer to previous node
* `next` → pointer to next node

This enables traversal in both forward and backward directions.

---

## Implemented Functions

| Function                   | Description                          |
| -------------------------- | ------------------------------------ |
| `print_dlistint`           | Prints all elements of the list      |
| `dlistint_len`             | Returns the number of nodes          |
| `add_dnodeint`             | Adds a new node at the beginning     |
| `add_dnodeint_end`         | Adds a new node at the end           |
| `get_dnodeint_at_index`    | Returns the node at a specific index |
| `sum_dlistint`             | Returns the sum of all node values   |
| `insert_dnodeint_at_index` | Inserts a node at a given index      |
| `delete_dnodeint_at_index` | Deletes a node at a given index      |
| `free_dlistint`            | Frees the entire list                |

---

## Compilation

Compile using strict flags:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o dll
```

These flags enforce clean, warning-free, and standards-compliant code.

---

## Example Usage

Example test flow:

```sh
Initial list:
1 <-> 2 <-> 3

Add 4 at the end:
1 <-> 2 <-> 3 <-> 4

Delete index 1:
1 <-> 3 <-> 4
```

You can create a `main.c` file to test all operations.

---

## Complexity Overview

| Operation        | Time Complexity |
| ---------------- | --------------- |
| Add at beginning | O(1)            |
| Add at end       | O(n)            |
| Insert at index  | O(n)            |
| Delete at index  | O(n)            |
| Traverse list    | O(n)            |

---

## Edge Cases Handled

* Insertion into an empty list
* Deletion of the head node
* Deletion of the last node
* Invalid index handling
* Proper memory cleanup to prevent leaks

---

## Technical Focus

This project reinforces strong understanding of:

* Manual memory management
* Pointer consistency in bidirectional structures
* Data structure manipulation without high-level abstractions
* Writing modular and maintainable C code

Understanding linked lists at this level builds strong foundations for systems programming, performance optimization, and low-level debugging.


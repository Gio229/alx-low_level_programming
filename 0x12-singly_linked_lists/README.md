# C - Singly linked lists
Data Structures

## Objective
Understand:
- When and why using linked lists vs arrays
- How to build and use linked lists

## Summary

## When and why using linked lists vs arrays?
We use linked lists when we want a kind of list more easy to use and which we can extend indefinitly.

## How to build and use linked lists
The main thing to understand about linked lists is that we have some node where the latest point to null. A node is a kind of data structure with value and pointer to the next element.

To checkout how to build and use linked lists feel free to visit the functions I have written between:
- 0-print_list.c
- ... to
- 4-free_list.c

## More
If we want to execute function before or after the main function, we have to put special attribute to it.
- `constructor` attribute to execute before the main
- `destructor` attribute to after before the main
exemple of prototype function:
```c
void before_main() __attribute__((constructor));
void after_main() __attribute__((destructor));
```
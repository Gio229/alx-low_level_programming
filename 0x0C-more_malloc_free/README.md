# More malloc, free
Dynamic memory allocation

## Purpose
Understand:
- How to use the `exit` function
- What are the functions  `calloc` and `realloc` from the standard library and how to use them

## Summary

### How to use the `exit` function.
`exit` function witch allow us to trigger a normal process termination.To use it we just call it like this
```c
exit(98);
```
Above we call exit with a status value of 98

### What are the functions `calloc` and `realloc` from the standard library and how to use them?
Those two functions are used in the context of dynamic allocation.
`calloc` allow us to allocate memory space for an array.
```c
int *a = calloc(n, sizeof(int));
```
It take two arguments. The first is the size number of elements in the array and the second is the size of each elements.

`realloc` allow us to reallocate memory space pointed to by an pointer that was previously allocated with a call to malloc or calloc.
```c
char *str;

str = (char *) malloc(25);

/* Reallocating memory */
str = (char *) realloc(str, 35);
```
It take two arguments. The first is the pointer and the second is the new size.

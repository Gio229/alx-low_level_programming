# malloc, free
Dynamic memory allocation

## Purpose
Understand:
- What is the difference between automatic and dynamic allocation

- What is malloc and free and how to use them

- Why and when use malloc

- How to use valgrind to check for memory leak


## Summary

### What is the difference between automatic and dynamic allocation?
Automatic allocation is allocation made by the program and we don't need to take care about it. For exemple, when we declare variables or when we use strings within double quotes, the program is taking care of all the memory allocation. However, we can do it at our own. That is dynamic allocation. We handle ourselves the memory allocation.

### What is malloc and free and how to use them?
<mark>malloc</mark> is used to allocate memory and <mark>free</mark> to free memory which was dynamically allocate. <br>
eg:
```c
char *memory;

memory = malloc(sizeof(char));

free(memory);
```

### Why and when use malloc?
We use malloc when we don't know the amount memory during the compile time, and we want to allocate it dynamically during the run time.
### How to use valgrind to check for memory leak?
When we are writing big and complexe pprogram, it's not easy to keep track of all allocated and deallocated. Thats is the purpose of valgrind to help us solved this. To use it we just need to call the command valgrind and give it as argument our executable.
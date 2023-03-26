# Structures, typedef
Definition of own type

## Purpose
Understand:
- What are structures, when, why and how to use them
- How to use typedef


## Summary

### What are structures, when, why and how to use them?
Structures are user defined data type in C language that allows to combine data items of
different kinds. To define a structure we use the keyword `struct` with bracket.
example:
```c
struct dog
{
	char *name;
	float age;
	char *owner;
};
```
### How to use typedef?
Like this
```c
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} new_name;
```
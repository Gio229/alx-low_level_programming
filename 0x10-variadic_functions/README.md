# Variadic functions

## Purpose
Understand:
- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

## Summary

### What are variadic functions
Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis (...) in place of the last parameters. Those functions must have at least one named parameter.
For example:
```c
int example_variadic_function(int a, double b, ...);
```

To allow this we use the variable arguments macros defined in the <mark>stdarg.h</mark> standard header.

### How to use va_start, va_arg and va_end macros
```c
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list arguments;

	if (n == 0)
		return (sum);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, unsigned int);

	va_end(arguments);

	return (sum);
}
```
This function above is going is a variadic function. It aim to sum arguments passed to. `n` in this case represente the number of arguments.

We setup the arguments with `va_list` and then start to map them whit `va_start`. `va_start` take the arguments setup with va_list and then the variable after which it map those arguments. 

`va_arg` tel us to switch to the next argument of a specified type.

`va_end` close the process.

### Why and how to use the const type qualifier
We use the `const` type qualifier when we want to make a variable constant and don't want to reasigned his value.
An declaration example is:
```c
const char my_constant = 'G';
```
#### Usage with pointer
```c
int i = 1, j = 2, k = 3;

/* With this syntax we can reassign
 *the value pointer but not the value pointed to */
const int *i_pointer = &i;

/* With this syntax we can reassign
 *the value pointed to but not the value of the pointer */
int * const j_pointer = &j;

/* Here it's freeze. we can't assign anything without error */
const int * const k_pointer = &k;

```
# Preprocessor
This project is about the preprocessor

## Purpose
Understand:
- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Summary

### What are macros and how to use them?
Macros are just identifier which will be replaced by a code fragment.
It's a kind of alias.
We create them with the `#define` directive. For example:
```c
#define PI 3.14
```

### What are the most common predefined macros?
Most common predefined macros are:
- `__FILE__` : give the name of the file it was compiled from
- `__LINE__` : give current input line number
- `__DATE__` : give the date on which the preprocessor is being run.
- `__TIME__` : give the time at which the preprocessor is being run
- and more...

### How to include guard in your header files?
Just like this:
```c
#ifndef MACROS
#define MACROS
#endif /* MACROS */
```

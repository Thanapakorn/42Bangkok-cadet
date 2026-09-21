# Libft

This project has been created as part of the 42 curriculum by tchaiyas.

## Description

Libft is a custom C library developed as part of the 42 Core Curriculum. The main goal of this project is to recreate commonly used functions from the C standard library from scratch, while developing a better understanding of memory management, strings, pointers, and data structures in C.

The library is compiled into a static library called `libft.a`, which can be reused in future 42 projects.

The project is divided into three parts:

### Part 1 — Libc Functions

Reimplementations of functions from the standard C library, with the `ft_` prefix.

Examples:

* `ft_strlen`
* `ft_memset`
* `ft_memcpy`
* `ft_memmove`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_atoi`
* `ft_calloc`
* `ft_strdup`

### Part 2 — Additional Functions

Additional utility functions that are not part of the standard C library.

Examples:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Part 3 — Linked Lists

A collection of functions for working with singly linked lists using the `t_list` structure.

Examples:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Instructions

### Compilation

The project includes a `Makef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ile` for compiling the library.

To build `libft.a`:

```bash
make
```

The Makefile compiles the source files using:

```bash
-Wall -Wextra -Werror
```

and creates the static library:

```text
libft.a
```

### Makefile Rules

```bash
make        # Build libft.a
make all    # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean everything and rebuild
```

## Using the Library

The library can be included and linked in other C projects.

For example:

```c
#include "libft.h"
```

Compile your project with:

```bash
cc main.c -I. -L. -lft -o program
```

Where:

* `-I.` tells the compiler where to find `libft.h`
* `-L.` tells the linker where to find `libft.a`
* `-lft` links the `libft` library

## Library Overview

The header file `libft.h` contains the prototypes of all functions and the linked-list structure.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Category               | Functions                                                                                                                              |
| ---------------------- | -------------------------------------------------------------------------------------------------------------------------------------- |
| Character Checks       | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`                                                                   |
| Memory                 | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`                                              |
| Strings                | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`                 |
| String Building        | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`                                            |
| File Descriptor Output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`                                                                       |
| Linked Lists           | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

## Project Structure

```text
libft/
├── Makefile
├── libft.h
├── libft.a
├── ft_*.c
└── ...
```

Each function is implemented in its own `.c` source file, while `libft.h` contains the required function prototypes and the `t_list` structure.

Helper functions that are only needed inside a specific source file are declared with `static` so they remain limited to that file.

## Learning Goals

Through this project, I practiced and improved my understanding of:

* C programming fundamentals
* Pointers
* Strings and character arrays
* Memory allocation and deallocation
* `malloc` and `free`
* Memory manipulation
* Function pointers
* Linked lists
* Header files
* Static libraries
* Makefiles
* Compilation flags
* Debugging and edge cases
* Norminette and 42 coding standards

## Resources

The following resources were used to understand the expected behavior and implementation requirements:

* 42 Libft subject and documentation
* Linux `man` pages
* C standard library documentation

## AI Usage

AI was used as a learning and development aid during this project.

It was used to:

* Understand C syntax and concepts
* Ask for explanations of function behavior
* Study examples of how functions can be used
* Help understand compilation and Makefile concepts
* Help draft and organize this `README.md`

The implementations were studied and understood as part of the learning process, with the goal of being able to explain how each function works and why it is implemented that way.

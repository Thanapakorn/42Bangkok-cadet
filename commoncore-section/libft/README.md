*This project has been created as part of the 42 curriculum by tchaiyas.*

# Libft

## Description

Libft is a project from the 42 curriculum in which I created my own C library containing a collection of general-purpose functions.

The goal of this project is to understand and reimplement commonly used functions from the C standard library, while also creating additional utility functions for string manipulation, memory management, file descriptor output, and linked lists.

This project is intended to become a reusable library for future C projects throughout the 42 curriculum.

The library is divided into three main parts:

* **Part 1:** Reimplementation of functions from the libc.
* **Part 2:** Additional utility functions for strings, memory, and output.
* **Part 3:** Functions for manipulating linked lists.

The project was written in C and follows the 42 Norm.

---

## Library Contents

### Part 1 - Libc Functions

The first part reimplements functions from the standard C library with an `ft_` prefix.

#### Character Classification

| Function     | Description                                                    |
| ------------ | -------------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is an alphabetic character.         |
| `ft_isdigit` | Checks whether a character is a digit.                         |
| `ft_isalnum` | Checks whether a character is alphanumeric.                    |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable.                       |

For these classification functions, the return value is `1` when the character belongs to the tested class and `0` otherwise.

#### String Functions

| Function     | Description                                                              |
| ------------ | ------------------------------------------------------------------------ |
| `ft_strlen`  | Calculates the length of a string.                                       |
| `ft_strlcpy` | Copies a string into a destination buffer with a size limit.             |
| `ft_strlcat` | Concatenates a string to another string with a size limit.               |
| `ft_strchr`  | Finds the first occurrence of a character in a string.                   |
| `ft_strrchr` | Finds the last occurrence of a character in a string.                    |
| `ft_strncmp` | Compares two strings up to a specified number of characters.             |
| `ft_strnstr` | Searches for a substring within another string up to a specified length. |
| `ft_strdup`  | Creates a dynamically allocated duplicate of a string.                   |
| `ft_atoi`    | Converts the initial portion of a string to an integer.                  |

#### Memory Functions

| Function     | Description                                                                 |
| ------------ | --------------------------------------------------------------------------- |
| `ft_memset`  | Fills a block of memory with a specified byte.                              |
| `ft_bzero`   | Sets a block of memory to zero.                                             |
| `ft_memcpy`  | Copies a block of memory from one location to another.                      |
| `ft_memmove` | Copies a block of memory while correctly handling overlapping memory areas. |
| `ft_memchr`  | Searches for a byte in a block of memory.                                   |
| `ft_memcmp`  | Compares two blocks of memory.                                              |
| `ft_calloc`  | Allocates memory for an array and initializes it to zero.                   |

#### Character Conversion

| Function     | Description                                   |
| ------------ | --------------------------------------------- |
| `ft_toupper` | Converts a lowercase character to uppercase.  |
| `ft_tolower` | Converts an uppercase character to lowercase. |

---

## Part 2 - Additional Functions

The second part contains additional utility functions required by the Libft project.

| Function        | Description                                                                                 |
| --------------- | ------------------------------------------------------------------------------------------- |
| `ft_substr`     | Creates a substring from a string starting at a specified index and with a maximum length.  |
| `ft_strjoin`    | Creates a new string by concatenating two strings.                                          |
| `ft_strtrim`    | Removes characters from the beginning and end of a string based on a specified set.         |
| `ft_split`      | Splits a string into an array of strings using a delimiter character.                       |
| `ft_itoa`       | Converts an integer into a string.                                                          |
| `ft_strmapi`    | Applies a function to each character of a string and creates a new string from the results. |
| `ft_striteri`   | Applies a function to each character of a string, allowing the characters to be modified.   |
| `ft_putchar_fd` | Writes a character to a specified file descriptor.                                          |
| `ft_putstr_fd`  | Writes a string to a specified file descriptor.                                             |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor.                       |
| `ft_putnbr_fd`  | Writes an integer to a specified file descriptor.                                           |

---

## Part 3 - Linked Lists

The library also contains functions for creating and manipulating singly linked lists.

The list structure is defined as:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Linked List Functions

| Function          | Description                                                        |
| ----------------- | ------------------------------------------------------------------ |
| `ft_lstnew`       | Creates a new list node with the given content.                    |
| `ft_lstadd_front` | Adds a node to the beginning of a list.                            |
| `ft_lstsize`      | Counts the number of nodes in a list.                              |
| `ft_lstlast`      | Returns the last node of a list.                                   |
| `ft_lstadd_back`  | Adds a node to the end of a list.                                  |
| `ft_lstdelone`    | Deletes one node and frees its content using a specified function. |
| `ft_lstclear`     | Deletes and frees all nodes in a list.                             |
| `ft_lstiter`      | Applies a function to the content of every node.                   |
| `ft_lstmap`       | Creates a new list by applying a function to every node's content. |

---

## Compilation

The project includes a `Makefile` used to compile the library.

To compile the library, run:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile Commands

```bash
make
make clean
make fclean
make re
```

* `make` - Compiles the source files and creates `libft.a`.
* `make clean` - Removes the object files.
* `make fclean` - Removes the object files and `libft.a`.
* `make re` - Removes the previous build and recompiles the library.

---

## Usage

To use the library in another C project, include the header file:

```c
#include "libft.h"
```

Then compile your project together with `libft.a`.

For example:

```bash
cc main.c -L. -lft
```

The `-L.` option tells the compiler to search for the library in the current directory, while `-lft` links the `libft.a` library.

---

## Example

A simple example using functions from Libft:

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Libft!");

	printf("String: %s\n", str);
	printf("Length: %zu\n", ft_strlen(str));

	free(str);
	return (0);
}
```

Compile it with:

```bash
cc main.c -L. -lft
```

Then run:

```bash
./a.out
```

---

## Testing

The functions were tested during development to verify their behavior and handle different input cases.

Testing included cases such as:

* Normal strings and characters.
* Empty strings.
* Zero-length operations.
* `NULL` pointers where applicable.
* Different memory sizes.
* Overlapping memory regions for `ft_memmove`.
* Positive and negative integers for `ft_atoi` and `ft_itoa`.
* Different delimiters and input strings for `ft_split`.
* Empty linked lists and multiple-node linked lists.
* Memory allocation and deallocation cases.

The project was also checked against the requirements of the 42 Libft subject and the 42 Norm.

---

## Memory Management

Several functions in Libft use dynamic memory allocation.

Functions such as:

* `ft_calloc`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_lstnew`
* `ft_lstmap`

may allocate memory that must be properly managed.

The project therefore focuses on understanding allocation, use, and freeing of dynamically allocated memory in C.

---

## What I Learned

Through this project, I learned and practiced several important C programming concepts:

* Working with pointers.
* Working with strings and character arrays.
* Memory allocation using `malloc`.
* Releasing dynamically allocated memory using `free`.
* Using `size_t`.
* Manipulating memory with pointers.
* Handling overlapping memory regions.
* Working with file descriptors.
* Creating and manipulating linked lists.
* Using function pointers.
* Understanding how static libraries work.
* Writing and organizing a reusable C library.
* Following coding standards and the 42 Norm.
* Testing functions with different edge cases.

Libft provided a foundation for understanding how many commonly used C functions work internally instead of relying only on existing library implementations.

---

## AI Usage

AI tools were used as a learning and development aid during this project.

### How AI Was Used

AI was used to:

* Explain C concepts and syntax that I did not fully understand.
* Explain the purpose and expected behavior of the required Libft functions.
* Help me understand function prototypes, parameters, return values, and edge cases.
* Provide simple examples to help me understand how functions work.
* Explain pointers, memory management, `size_t`, `static`, function pointers, and linked lists.
* Help identify and understand compiler errors and Norminette errors.
* Help review code and explain why certain implementations worked or did not work.
* Help with debugging and understanding unexpected behavior.
* Help organize and structure this README file.

AI was used as a support and learning tool rather than as a replacement for understanding the project requirements.

I referred to the official 42 Libft subject and tested the implementations myself to verify their behavior.

---

## Resources

The following resources were used to understand the project and C programming concepts:

* The official 42 Libft subject.
* C standard library documentation and manual pages.
* The `man` pages available on Unix/Linux systems.
* Compiler output and testing during development.
* AI tools for explanations, debugging assistance, and learning support.

---

## Project Structure

A typical project structure is:

```text
libft/
├── Makefile
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
```

---

## License

This project was created as part of the 42 curriculum for educational purposes.

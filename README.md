*This project has been created as part of the 42 curriculum by tadupin.*

# Libft

## Description

Libft is a project from the 42 school curriculum. Its goal is to recreate a personal C library by implementing several standard C library functions and additional utility functions.

This project helps develop a deeper understanding of the C language, memory management, pointers, strings, and linked lists. It also introduces static libraries and compilation automation using a Makefile.

The resulting library, `libft.a`, can be reused in future C projects at 42.

## Instructions

### Compilation

To compile the library, run the following command at the root of the repository:

```bash
make
```

This command compiles the source files and creates the static library `libft.a`.

Available Makefile commands:

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates `libft.a`. |
| `make clean` | Removes the generated object files (`.o`). |
| `make fclean` | Removes the object files and the library `libft.a`. |
| `make re` | Cleans and recompiles the library. |

### Using the library

To use Libft in another C project, include `libft.h` in your source file and link the static library during compilation.

Example (`main.c`):

```c
#include "libft.h"

int	main(void)
{
	ft_putstr_fd("Hello from Libft!\n", 1);
	return (0);
}
```

Compile the program from the directory containing `libft.a` and `libft.h`:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
```

Run the executable:

```bash
./program
```

Compilation flags:

- `-Wall`: enables a broad set of compiler warnings.
- `-Wextra`: enables additional compiler warnings.
- `-Werror`: treats enabled warnings as errors.
- `-I.`: specifies the current directory as an include search path.
- `-L.`: specifies the current directory as a library search path.
- `-lft`: links the `libft` library, typically using `libft.a`.
- `-o program`: names the resulting executable `program`.

## Library Contents

The library contains implementations of character, string, memory, conversion, output, and linked list functions.

### 1. Character Functions

These functions classify characters or convert between uppercase and lowercase.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. String Functions

These functions measure, search, compare, copy, and manipulate strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string into a destination buffer with size control. |
| `ft_strlcat` | Appends a string to a destination buffer with size control. |
| `ft_strnstr` | Searches for a substring within a limited length. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |
| `ft_substr` | Extracts a substring into newly allocated memory. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character using its index and a pointer to the character. |

### 3. Memory Functions

These functions manipulate memory areas and handle memory allocation.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory areas. |
| `ft_memmove` | Copies bytes while handling overlapping memory areas. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |

### 4. Conversion and Output Functions

These functions convert values and write data to file descriptors.

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 5. Linked List Functions

The library also implements singly linked list operations.

Each node uses the `t_list` structure, which contains a pointer to its content and a pointer to the next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a specified deletion function. |
| `ft_lstclear` | Deletes an entire list and frees its contents using a specified deletion function. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

These functions provide practice with pointers, structures, function pointers, dynamic memory allocation, and memory ownership.

## Technical Choices

- **Language:** C.
- **Compiler:** `cc` or `gcc`.
- **Compilation flags:** `-Wall -Wextra -Werror`.
- **Library format:** Static library (`libft.a`).
- **Header file:** `libft.h`.
- **Build system:** Makefile.
- **Coding standard:** 42 Norm.

The project is organized into individual source files, with each function implemented in its own `.c` file. The `libft.h` header contains the function prototypes and shared type definitions.

## Resources

The following resources were useful for understanding C and implementing the library:

- [C reference — cppreference](https://en.cppreference.com/w/c) — documentation for the C language and its standard library.
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — reference for standard library behavior.
- [Linux man-pages](https://man7.org/linux/man-pages/) — documentation for functions such as `malloc`, `free`, `memcpy`, and `strlen`.
- [GCC documentation](https://gcc.gnu.org/onlinedocs/) — compiler options and warnings.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — documentation for Makefiles and build automation.

### AI Usage

AI tools were used as learning and development assistance during this project.

They helped with:

- Understanding the behavior and expected use of standard C library functions.
- Investigating bugs and interpreting compiler warnings and runtime errors.
- Understanding pointers, linked lists, dynamic memory allocation, and memory management.
- Preparing test examples and learning debugging techniques using GDB.
- Structuring and drafting this README.

AI was used as a support tool for explanations, debugging guidance, and documentation. The project author remains responsible for understanding, reviewing, testing, and validating the final implementation.

## Learning Objectives

The main learning objectives of this project are to:

- Understand how common C library functions work.
- Improve pointer manipulation and string handling.
- Learn to allocate, initialize, and release memory safely.
- Understand linked lists and function pointers.
- Develop reusable and maintainable C code.
- Learn to automate compilation with a Makefile.
- Improve debugging and problem-solving skills.


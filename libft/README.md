*This project has been created as part of the 42 curriculum by waihein.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum. It recreates several standard C library functions and adds utility functions for string manipulation, memory management, character conversion, and linked-list operations.

The project reinforces fundamental C programming concepts, including pointers, dynamic memory allocation, structures, and function pointers.

The project consists of a mandatory part and a bonus part:

- **Part 1 & Part2:** Character checking and conversion, memory manipulation, string manipulation, number conversion, and file descriptor output.
- **Part 3:** Functions for creating and managing singly linked lists.

## Instructions

### Requirements

- C compiler (`cc`)
- `make`

### Compilation

To compile the library, run:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

### Makefile Commands

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Compiles the library if necessary.       |
| `make clean`  | Removes the object files (`.o`).         |
| `make fclean` | Removes the object files and `libft.a`.  |
| `make re`     | Performs a clean rebuild of the library. |

## Library Details

### Character Functions

These functions test or convert individual characters:

- `ft_isalpha` — Checks whether a character is alphabetic.
- `ft_isdigit` — Checks whether a character is a decimal digit.
- `ft_isalnum` — Checks whether a character is alphanumeric.
- `ft_isascii` — Checks whether a character belongs to the ASCII character set.
- `ft_isprint` — Checks whether a character is printable.
- `ft_toupper` — Converts a lowercase letter to uppercase.
- `ft_tolower` — Converts an uppercase letter to lowercase.

### String Functions

These functions provide common operations for null-terminated C strings:

- `ft_strlen` — Calculates the length of a string.
- `ft_strchr` and `ft_strrchr` — Locate a character in a string.
- `ft_strncmp` — Compares two strings up to a specified number of characters.
- `ft_strlcpy` and `ft_strlcat` — Copy and concatenate strings with size limits.
- `ft_strnstr` — Searches for a substring within a specified length.
- `ft_strdup` — Creates a dynamically allocated duplicate of a string.

### Memory Functions

These functions operate on memory at the byte level:

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

They provide practice with pointers, memory addresses, and byte-level operations.

### Allocation and Conversion Functions

- `ft_calloc` — Allocates memory and initializes it to zero.
- `ft_atoi` — Converts the initial numeric portion of a string into an integer.
- `ft_itoa` — Converts an integer into a dynamically allocated string.

### Additional String Functions

- `ft_substr` — Creates a substring.
- `ft_strjoin` — Concatenates two strings into a newly allocated string.
- `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- `ft_split` — Splits a string into an array of strings using a delimiter.
- `ft_strmapi` — Applies a function to each character and creates a new string.
- `ft_striteri` — Applies a function to each character of an existing string.

These functions involve dynamic memory allocation and require careful handling of allocation failures and memory leaks.

### File Descriptor Functions

These functions write data to a specified file descriptor:

- `ft_putchar_fd` — Writes a character.
- `ft_putstr_fd` — Writes a string.
- `ft_putendl_fd` — Writes a string followed by a newline.
- `ft_putnbr_fd` — Writes an integer.

They can write to destinations such as standard output or standard error.

## Part 3 — Linked Lists

The bonus functions implement and manipulate a singly linked list using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:

- `content` — A pointer to the data stored in the node.
- `next` — A pointer to the next node, or `NULL` if it is the last node.

The linked-list functions provide operations for:

- `ft_lstnew` — Creating nodes.
- `ft_lstadd_front` — Adding a node to the beginning.
- `ft_lstadd_back` — Adding a node to the end.
- `ft_lstsize` — Counting the nodes.
- `ft_lstlast` — Finding the last node.
- `ft_lstdelone` — Deleting a single node.
- `ft_lstclear` — Deleting an entire list.
- `ft_lstiter` — Applying a function to each node's content.
- `ft_lstmap` — Creating a new list by applying a function to each node's content.

This part reinforces structures, pointers, dynamic memory allocation, linked-list traversal, and function pointers.

## Compilation Flags

The Makefile uses the following compiler flags:

```
-Wall -Wextra -Werror
```

These enable common compiler warnings and treat warnings as errors.

## Code Standards

The project should follow the 42 coding standard. You can check the source files using Norminette:

```bash
norminette
```

## Resources

### References

- Linux manual pages (`man 3 <function>`) for the behavior of the standard C library functions recreated in this project.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) for writing the Makefile.
- [42 Norm](https://github.com/42School/norminette) for the coding standard.
- YouTube videos to understand linked lists.
### Use of AI

AI tools were used as a learning aid, for example to understand concepts such as pointers, memory allocation, and linked lists, and to help structure this README.

## Author

**waihein** — 42 student
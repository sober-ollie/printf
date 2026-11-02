
*This project has been created as part of the 42 curriculum by waihein.*

# ft_printf

## Description

The `ft_printf` project is part of the 42 Common Core curriculum. Its goal is to recreate the behaviour of the standard C library function `printf()`.

This project introduces variadic functions in C and provides practical experience with formatted output, data types, memory management, and string manipulation.

Instead of using the original `printf()`, this project implements a custom function called `ft_printf()` that processes a format string, identifies conversion specifiers, retrieves the corresponding arguments, and prints the formatted output to standard output.

### Supported Conversions

| Conversion | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string of characters. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a signed decimal integer. |
| `%i` | Prints a signed decimal integer. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints an unsigned hexadecimal number in lowercase. |
| `%X` | Prints an unsigned hexadecimal number in uppercase. |
| `%%` | Prints a percent sign. |

## Instructions

### Requirements

Before compiling the project, make sure you have:

- A C compiler (`cc`).
- `make`.
- The 42 Libft library.
- Linux or another compatible Unix-like environment.

### Project Structure

```text
printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── print.c
├── helper.c
├── helper2.c
└── README.md

libft/
├── libft.h
├── Makefile
└── ...
```

### Compilation

Place the Libft project alongside the `printf` directory.

Example:

```text
printf/
├── printf/
└── libft/
```

Navigate to the project directory:

```bash
cd printf
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the project and generates `libftprintf.a`. |
| `make all` | Builds the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the compiled library. |
| `make re` | Rebuilds the project from scratch. |

### Usage

To use `ft_printf()` in your own C program, include the project header:

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello, %s! You are %d years old.\n",
            "World", 42);
    ft_printf("Characters printed: %d\n", count);
    return (0);
}
```

Compile your program and link it with the generated library and Libft:

```bash
cc -Wall -Wextra -Werror -I. -I../libft main.c \
    -L. -lftprintf -o program
```

Run the executable:

```bash
./program
```

## Implementation Details

### 1. Variadic Functions

The implementation uses the C `stdarg.h` library to handle a variable number of arguments.

The following macros are used:

- `va_list`: Declares a variable that stores the argument list.
- `va_start`: Initialises the argument list.
- `va_arg`: Retrieves the next argument with the specified data type.
- `va_end`: Cleans up the argument list after processing.

This allows `ft_printf()` to accept different numbers and types of arguments depending on the format string.

### 2. Format String Parsing

The main `ft_printf()` function iterates through the format string character by character.

When it encounters a `%` character, it checks the following character to identify the conversion specifier.

Depending on the specifier, it retrieves the corresponding argument and calls the appropriate helper function.

Ordinary characters are printed directly.

### 3. Helper Functions

The implementation separates different conversion operations into helper functions.

These functions handle:

- Character output.
- String output.
- Signed and unsigned integer conversion.
- Hexadecimal conversion.
- Pointer formatting.

This modular approach makes the code easier to maintain and reduces duplicated logic.

### 4. Number Conversion

Integer values are converted into strings before being printed.

For decimal numbers, the implementation extracts digits using division and modulo operations.

For hexadecimal numbers, the same principle is applied using base 16 and a hexadecimal character set:

```c
"0123456789abcdef"
```

Uppercase hexadecimal output is achieved by converting the resulting letters to uppercase.

### 5. Memory Management

Some conversion functions dynamically allocate memory to store the resulting string.

After printing the converted string, the allocated memory is released using `free()`.

This prevents memory leaks during repeated calls to `ft_printf()`.

### 6. Return Value

Like the original `printf()`, `ft_printf()` returns the number of characters printed.

For a NULL format string, this implementation returns `-1`.

## Resources

The following resources were used to understand the concepts and develop the project:

- **Original `printf()` function:** Studied the behaviour and output of the standard C `printf()` function to understand how format specifiers work and how the function handles different data types.
- **YouTube tutorials:** Watched educational videos to understand variadic functions, `va_list`, `va_start`, `va_arg`, and `va_end`, as well as the general implementation of `ft_printf()`.
- **42 subject:** Used the official project subject to understand the requirements and allowed functions.
- **Manual pages:** Consulted the `man` pages for C functions and related concepts.

### AI Usage

AI tools, including ChatGPT, were used as learning and development assistance throughout this project.

AI assistance included:

- Explaining variadic functions and the usage of `va_list`, `va_start`, `va_arg`, and `va_end`.
- Clarifying integer conversion algorithms, hexadecimal representation, and pointer formatting.
- Helping identify potential bugs, including NULL string handling and NULL format string handling.
- Explaining memory allocation, deallocation, stack and heap concepts, and Valgrind reports.
- Reviewing code structure, helper functions, and Makefile rules.
- Assisting with debugging and understanding compiler and tester error messages.
- Helping prepare and organise this README documentation.

The implementation, code modifications, testing, and final decisions were carried out by the student. AI was used as a supplementary learning tool rather than as a replacement for understanding and implementing the project.

*Project developed as part of the 42 Common Core curriculum.*

*This project has been created as part of the 42 curriculum by ohajjaji.*

# ft_printf

## Description

The `ft_printf` project consists of recreating the standard C `printf()` function.

The main objective is to understand how formatted output works and how to manage a variable number of arguments using variadic functions.

The project introduces important C concepts such as:
- Variadic functions.
- Pointers and data types.
- Format specifiers.
- Number conversion.
- Memory representation.
- Return values and error handling.

The function supports the following conversions:

| Specifier | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal. |
| `%d` | Prints a decimal number. |
| `%i` | Prints an integer. |
| `%u` | Prints an unsigned decimal number. |
| `%x` | Prints a hexadecimal number in lowercase. |
| `%X` | Prints a hexadecimal number in uppercase. |
| `%%` | Prints the percent character. |

## Instructions

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd ft_printf
```

Compile the project using:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

### Using the library

Include the project header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf -o program
```

Run the executable:

```bash
./program
```

### Makefile commands

The Makefile provides the following commands:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Removes everything and recompiles the project.

## Algorithm and Data Structures

### General algorithm

The main function reads the format string character by character.

For each character, it checks whether the character is `%`.

- If it is a normal character, the program prints it directly.
- If it is `%`, the program reads the next character to identify the requested conversion.
- Depending on the conversion specifier, it calls the appropriate printing function.

Each printing function handles a specific data type or conversion.

The number of printed characters is counted and returned by `ft_printf()`, just like the original `printf()` function.

### Variadic functions

The project uses the following macros and type:

- `va_list`: Stores information about the additional arguments.
- `va_start`: Initializes the argument list.
- `va_arg`: Retrieves the next argument with the expected type.
- `va_end`: Finishes using the argument list.

These allow `ft_printf()` to receive a variable number of arguments.

### Number conversion

Decimal numbers are printed using division and modulo operations.

For hexadecimal numbers, the program uses base 16. A lookup string containing hexadecimal characters is used to select the correct digit.

For pointer addresses, the pointer is converted to `unsigned long` before being printed in hexadecimal.

### Data structures

The project does not require complex data structures.

The main elements used are:

- A `va_list` to manage variadic arguments.
- A format string to determine what should be printed.
- Integer variables to count printed characters and manage conversions.
- Lookup strings to convert hexadecimal digits.

This approach keeps the implementation modular and makes each conversion easier to understand, test, and maintain.

## Resources

The following resources were useful during the development of this project:

- [printf – Linux Manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [write – Linux Manual](https://man7.org/linux/man-pages/man2/write.2.html)
- [Variadic Functions – C Reference](https://en.cppreference.com/w/c/variadic.html)

The project was also developed using the `man` pages and practical tests comparing the behavior of `ft_printf()` with the original `printf()`.

## AI Usage

AI tools were used as a learning and development assistant during this project.

They helped with:
- Understanding variadic functions and how `va_list`, `va_start`, `va_arg`, and `va_end` work.
- Understanding format specifiers and their corresponding argument types.
- Learning how decimal and hexadecimal conversions work.
- Identifying logical errors and debugging implementation issues.

AI was used to explain concepts and support problem-solving. The implementation and testing process helped reinforce the concepts learned throughout the project.

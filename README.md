no# Printf Implementation

## Introduction
This repository contains a custom implementation of the printf function in C. The printf function is a widely used function in the C programming language that is used for formatted output. This implementation provides support for a variety of format specifiers, allowing users to format and print data in a flexible way.

## Code Structure

### Header Files
- **main.h**: Header file containing function prototypes, structure definitions, and necessary include statements.

### Source Files
- **_putchar.c**: Contains the implementation of the `_putchar` function, which prints a single character to the standard output.
- **_puts.c**: Contains the implementation of the `_puts` function, which prints a string to the standard output.
- **nums.c**: Contains functions for printing integers and unsigned integers, as well as helper functions for counting digits.
- **bases.c**: Contains functions for printing numbers in various bases such as hex, HEX, binary, and octal.
- **_printf.c**: Contains the main implementation of the `_printf` function, which simulates the behavior of the standard printf function.
- **get_print.c**: Contains a function that returns a function pointer based on the format specifier character.
- **get_flag.c**: Contains a function that updates a flags_format structure based on a given character.
- **alpha.c**: Contains functions for printing strings and characters.
- **custom.c**: Contains custom functions for printing strings in ROT13, handling special characters in strings, and reversing strings.
- **percent.c**: Contains the implementation for printing the '%' character.
- **address.c**: Contains the implementation for printing memory addresses.

## How to Use

To use this printf implementation, include the "main.h" header file in your C code, and then call the `_printf` function with the desired format string and arguments.

```c
#include "main.h"

int main(void)
{
    int num = 42;
    char *str = "Hello, World!";

    _printf("This is a number: %d\n", num);
    _printf("This is a string: %s\n", str);

    return 0;
}
```
## Supported Format Specifiers
`%d` and `%i`: Print signed integers.
`%u`: Print unsigned integers.
`%x` and `%X`: Print integers in hexadecimal format.
`%o`: Print integers in octal format.
`%c`: Print characters.
`%s`: Print strings.
`%p`: Print memory addresses.
`%S`: Print strings with special character handling.
`%R`: Print strings in ROT13.
`%%`: Print a literal '%' character.
## Compilation
- To compile the code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

This assumes that all source files (*.c) are in the same directory. Adjust the command as needed for your project structure.
## authors
* **Marwa Gharieb** - [ifonll](https://github.com/ifonll)

* **Hasan Ragab** - [2Hasan2](https://github.com/2Hasan2)

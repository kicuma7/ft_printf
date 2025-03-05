# ft_printf

ft_printf is a custom implementation of the standard `printf` function in C. It is designed to replicate the behavior of `printf` while providing a solid understanding of variadic functions, formatted output, and buffer management.

---

## Installation

To compile the library, run:

```sh
make
```

This will generate the `libftprintf.a` static library.

To clean object files:
```sh
make clean
```

To remove the compiled library as well:
```sh
make fclean
```

To recompile from scratch:
```sh
make re
```

---

## Usage

To use `libftprintf.a` in your project, include it in your compilation process:

```sh
gcc -Wall -Wextra -Werror my_program.c -L. -lftprintf -o my_program
```

And in your code, include the library header:

```c
#include "ft_printf.h"
```

You can then use `ft_printf` just like `printf`:

```c
ft_printf("Hello, %s! You have %d new messages.\n", "User", 5);
```

To test the implementation with a simple main file, run:
```sh
make run
```
This compiles and executes `main.c` linked with the `libftprintf.a` library.

---

## Implemented Functions

- `ft_printf` - Main function handling formatted output
- `ft_putchar` - Outputs a single character
- `ft_putstr` - Outputs a string
- `print_format` - Processes format specifiers
- `print_num` - Prints numerical values
- `print_hexa` - Prints hexadecimal values

---

## Project Structure

```
ft_printf/
├── src/
│   ├── ft_printf.c
│   ├── ft_putchar.c
│   ├── ft_putstr.c
│   ├── print_format.c
│   ├── print_num.c
│   ├── print_hexa.c
├── obj/
├── ft_printf.h
├── libftprintf.a
├── Makefile
├── main.c (optional for testing)
└── README.md
```

---

## 📜 License

This project was developed as part of the **42 curriculum** and is freely available for study and improvement. Feel free to use it for your learning. 🚀


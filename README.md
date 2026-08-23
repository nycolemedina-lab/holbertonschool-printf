# _printf

A custom implementation of the C library `printf` function (`man 3 printf`), created for Holberton Coding School.

## Description
The `_printf` function produces formatted output to standard output (`stdout`). It uses variadic arguments and a function pointer dispatch table to handle format specifiers.

## Supported Specifiers

| Specifier | Description | Example |
| :--- | :--- | :--- |
| `%c` | Single character | `_printf("%c", 'A');` |
| `%s` | String of characters | `_printf("%s", "Hello");` |
| `%%` | Literal percent sign | `_printf("100%%");` |
| `%d` / `%i` | Signed integer | `_printf("%d", 1024);` |

## Return Value
- Returns the total number of characters printed.
- Returns `-1` if `format` is `NULL` or ends with a single trailing `%`.

## Compilation & Usage

Compile all `.c` files using `gcc`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf

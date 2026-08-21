# Custom C Library Function: `_printf`

## Description
`_printf` is a custom implementation of the standard C library `printf` function (`man 3 printf`), developed as part of the software engineering curriculum. It formats and prints data to the standard output (`stdout`) stream using variadic functions, a dispatch table architecture, and modular specifier handlers.

---

## Requirements & Environment
- **Language:** C (C99 / GNU89 standard)
- **OS:** Ubuntu 20.04 LTS / Linux
- **Compiler:** `gcc` using options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style Standard:** [Betty Coding & Documentation Style](https://github.com/hs-hq/betty)

---

## Supported Format Specifiers

| Specifier | Description | Example Input | Output |
| :--- | :--- | :--- | :--- |
| **`%c`** | Single ASCII character | `_printf("%c", 'A')` | `A` |
| **`%s`** | Null-terminated string | `_printf("%s", "Hello")` | `Hello` |
| **`%%`** | Literal percent sign | `_printf("100%%")` | `100%` |
| **`%d`** | Signed decimal integer | `_printf("%d", -1024)` | `-1024` |
| **`%i`** | Signed integer (base 10) | `_printf("%i", 42)` | `42` |

---

## Return Value
- **Success:** Returns the total number of characters printed to `stdout` (excluding the null byte used to terminate strings).
- **Failure:** Returns `-1` if `format` is `NULL` or if a single trailing `%` is encountered at the end of the format string.

---

## Installation & Compilation

Clone the repository and compile the source files using `gcc`:

```bash
git clone [https://github.com/nycolemedina-lab/holbertonschool-printf.git](https://github.com/nycolemedina-lab/holbertonschool-printf.git)
cd holbertonschool-printf
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf

# C Basics

## 1. Data Types

| Data Type | Description |
|-----------|-------------|
| `int` | Stores whole numbers (integers), e.g. 10, -5, 2024. |
| `float` | Stores single-precision floating-point (decimal) numbers. |
| `double` | Stores double-precision floating-point numbers, offering more precision than `float`. |
| `char` | Stores a single character, e.g. 'A', '9', '$'. |
| `bool` | Stores a boolean value: `true` (1) or `false` (0). Requires `<stdbool.h>` in C. |
| `void` | Represents the absence of a type — used for functions that return no value or generic pointers. |

## 2. Format Specifiers

| Specifier | Meaning |
|-----------|---------|
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%o` | Unsigned octal integer |
| `%x` | Unsigned hexadecimal integer (lowercase letters) |
| `%X` | Unsigned hexadecimal integer (uppercase letters) |
| `%f` | Floating-point number (decimal notation) |
| `%e` | Floating-point number (scientific/exponential notation) |
| `%c` | Single character |
| `%s` | String of characters |
| `%ld` | Signed long integer |

## 3. Input/Output Functions

- **`scanf()`** — Reads formatted input from the standard input (keyboard) based on a format string, e.g. `scanf("%d", &num);`.
- **`printf()`** — Writes formatted output to the standard output (console) based on a format string, e.g. `printf("%d", num);`.
- **`getchar()`** — Reads a single character from standard input and returns it as an integer.
- **`putchar()`** — Writes a single character to standard output.
- **`fgets()`** — Reads a line of text (including spaces) from input into a string, up to a specified length, making it safer than `scanf("%s")` for reading strings.
- **`puts()`** — Writes a string to standard output followed by a newline character.

## 4. Escape Sequences

| Escape Sequence | Meaning | Example |
|------------------|---------|---------|
| `\n` | Newline — moves cursor to next line | `printf("Hi\n");` |
| `\t` | Horizontal tab | `printf("A\tB");` |
| `\\` | Backslash character | `printf("C:\\path");` |
| `\'` | Single quote character | `printf("It\'s ok");` |
| `\"` | Double quote character | `printf("\"Quoted\"");` |

## 5. Precision

Precision for floating-point output is specified by adding a period (`.`) followed by a number between the `%` and the format specifier, indicating how many digits should appear after the decimal point. For example:

```
printf("%.2f", 3.14159);   // Output: 3.14
printf("%.0f", 3.14159);   // Output: 3
printf("%.4f", 3.14159);   // Output: 3.1416
```

If no precision is specified, `printf` defaults to showing 6 digits after the decimal point for `%f`.

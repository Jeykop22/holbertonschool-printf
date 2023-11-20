# _printf :page_facing_up:

The project is a creation of Holbertonschool and the program is a pseudo-recreation of the C standard library function, `printf`.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 14.04 LTS machine with `gcc` version 4.8.4.

## Description :speech_balloon:

The function `_printf` writes output to standard output. The function writes
under the control of a `format` string that specifies how subsequent arguments
(accessed via the variable-length argument facilities of `stdarg`) are
converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to
strings). If an output error is encountered, a negative value is returned.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero or more directives.
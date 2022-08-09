#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(const char *);
int custom_print(char *);
char *itoa(long int, int);

int _printf(const char *, ...);

int translator(const char *, va_list);
int check_formatter(const char *, va_list, int *);

int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_non_printable_char(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_lower(va_list);
int print_hexadecimal_upper(va_list);
int print_pointer(va_list);
int print_string_reversed(va_list);

int _putchar(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif

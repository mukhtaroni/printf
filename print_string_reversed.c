#include "main.h"

/**
 * print_string_reversed - Print a string in reverse
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int  print_string_reversed(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}

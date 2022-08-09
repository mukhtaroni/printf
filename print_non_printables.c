
#include "main.h"

int is_not_printable(char);

/**
 * print_non_printable_char - Print a non-printable character
 * @list: Char to print
 *
 * Return: Length of the character
 **/
int print_non_printable_char(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (i = 0; i < size; i++)
	{
		if (is_not_printable(str[i]))
		{
			_putchar('\\');
			_putchar('x');
		}
		else
		{
			_putchar(str[i]);
		}
	}
	return (size);
}

/**
 * is_not_printable - Check if the character are within the printable range
 * @c: Character
 * Return: 1 or 0
 **/
int is_not_printable(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

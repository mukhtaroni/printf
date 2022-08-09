#include "main.h"

/**
 * translator - Format controller
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/
int translator(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			aux = check_formatter(str, list, &i);
			if (aux == -1)
				return (-1);

			size += aux;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}

	return (size);
}

/**
 * check_formatter - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int check_formatter(const char *str, va_list list, int *i)
{
	int size, j, number_formats;

	format formats[] = {
		{'c', print_char}, {'s', print_string}, {'d', print_integer},
		{'i', print_integer}, {'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_lower},
		{'X', print_hexadecimal_upper}, {'S', print_non_printable_char},
		{'p', print_pointer}, {'r', print_string_reversed}, {'R', print_rot}
	};
	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);

	return (2);
}

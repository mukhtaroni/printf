#include "main.h"

/**
 * print_hexadecimal_lower - Print a number in hexadecimal format (lcase)
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_lower(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = custom_print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

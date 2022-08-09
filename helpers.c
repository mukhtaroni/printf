#include "main.h"
/**
 * custom_print - print character array
 * @str: string to print
 *
 * Return: length of string
 */
int custom_print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length of String
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 * Return: char
 * source: https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 */
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

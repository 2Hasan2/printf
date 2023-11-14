#include "main.h"

/**
 * print_string - prints a string
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_string(va_list args, flags_format *f)
{
	char *s = va_arg(args, char *);

	(void)f;
	_puts((s != NULL) ? s : "(null)");
	return (count_string(s));
}

/**
 * print_char - prints a character
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_char(va_list args, flags_format *f)
{
	(void)f;
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * count_string - counts the length of a string
 * @string: string to be counted
 * Return: number of characters in the string
 */
int count_string(char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}

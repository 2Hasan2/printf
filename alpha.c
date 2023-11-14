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
	return (_puts((s != NULL) ? s : "(null)"));
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

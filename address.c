#include "main.h"
/**
 * print_address - prints a string with S flag
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_address(va_list args, flags_format *f)
{
	unsigned long int p;
	char *str;
	(void)f;

		p = va_arg(args, unsigned long int);

	if (!p)
		return (_puts("(nil)"));

	str = convert(p, 16, 1);

	return (_puts("0x") + _puts(str));
}

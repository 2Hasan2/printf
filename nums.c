#include "main.h"

/**
 * print_int - prints an integer
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of characters printed
 */
int print_int(va_list args, flags_format *f)
{
	int n = va_arg(args, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n < 0)
		res += _putchar('-');
	print_number((n < 0) ? -n : n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of characters printed
 */
int print_unsigned(va_list args, flags_format *f)
{
	unsigned int u = va_arg(args, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(unsigned int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 1;
	unsigned int u = (i < 0) ? -i : i;

	while (u >= 10)
	{
		u /= 10;
		d++;
	}
	return (d);
}

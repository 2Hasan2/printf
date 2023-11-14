#include "main.h"

/**
 * print_hex - prints an hexadecimal in lowercase
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of characters printed
 */
int print_hex(va_list args, flags_format *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);

	if (f->hash == 1 && str[0] != '0')
		return (_puts("0x") + _puts(str));

	return (_puts(str));
}

/**
 * print_HEX - prints an hexadecimal in uppercase
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of characters printed
 */
int print_HEX(va_list args, flags_format *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);

	if (f->hash == 1 && str[0] != '0')
		return (_puts("0X") + _puts(str));

	return (_puts(str));
}

/**
 * print_binary - prints a number in binary format
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_binary(va_list args, flags_format *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
/**
 * print_octal - prints a number in octal format
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_octal(va_list args, flags_format *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);

	if (f->hash == 1 && str[0] != '0')
		return (_putchar('0') + _puts(str));

	return (_puts(str));
}

#include "main.h"

/**
 * convert - converts an unsigned long int to
 * string in a given base
 * @num: number to convert
 * @base: base to convert number into
 * @lowercase: flag to determine if the string should be
 * lowercase (1) or uppercase (0)
 * Return: pointer to converted string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char buffer[50];
	char *ptr = &buffer[sizeof(buffer) - 1];
	static const char *lowercaseRep = "0123456789abcdef";
	static const char *uppercaseRep = "0123456789ABCDEF";
	const char *rep = (lowercase) ? lowercaseRep : uppercaseRep;

	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

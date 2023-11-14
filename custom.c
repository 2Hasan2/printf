#include "main.h"

/**
 * print_S - prints a string with S flag
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_S(va_list args, flags_format *f)
{
	int count = 0;
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (; *s; ++s)
	{
		if (*s > 0 && (*s < 32 || *s >= 127))
		{
			_puts("\\x");
			count += 2 + (_putchar((*s >> 4) + '0') * !((*s >> 4) & 0xF));
			count += _putchar((*s & 0xF) + '0');
		}
		else
			count += _putchar(*s);
	}
	return (count);
}

/**
 * print_rev - prints a reversed string
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_rev(va_list args, flags_format *f)
{
	int count = 0, i;
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		s = "(null)";

	for (i = 0; s[i]; ++i)
		;
	for (--i; i >= 0; --i)
		count += _putchar(s[i]);

	return (count);
}

/**
 * print_rot13 - prints a string in rot13
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_rot13(va_list args, flags_format *f)
{
	int count = 0, i;
	char *s = va_arg(args, char *);
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	(void)f;
	for (; *s; ++s)
	{
		if ((*s < 'A' || (*s > 'Z' && *s < 'a') || *s > 'z'))
			count += _putchar(*s);
		else
		{
			for (i = 0; i <= 52; ++i)
			{
				if (*s == rot13[i])
					count += _putchar(ROT13[i]);
			}
		}
	}

	return (count);
}

/**
 * print_percent - prints a percent symbol
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of characters printed
 */
int print_percent(va_list args, flags_format *f)
{
	(void)args;
	(void)f;
	return (_putchar('%'));
}

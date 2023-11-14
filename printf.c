#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints formatted text
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *current;
	flags_format flags = {0, 0, 0};
	int count = 0;
	int (*printingFunction)(va_list, flags_format *);

	va_start(args, format);
	if (!format)
		return (-1);
	for (current = format; *current; ++current)
	{
		if (*current == '%')
		{
			++current;
			if (*current == '%')
			{
				count += _putchar('%');
				continue;
			}

			while (get_flag(*current, &flags))
				++current;

			printingFunction = get_print(*current);

			count += (printingFunction) ?
			printingFunction(args, &flags) :
			_printf("%%%c", *current);
		}
		else
			count += _putchar(*current);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}

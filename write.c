#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	static char buf[BUFFER_SIZE];
	static int i;

	if (i >= BUFFER_SIZE || c == -1)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != -1)
		buf[i++] = c;

	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: string to print
 * Return: number of characters printed
 */
int _puts(char *str)
{
	register int i = 0;

	while (str[i])
		_putchar(str[i++]);

	return (i);
}

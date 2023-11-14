#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_format *)
{
	switch_fromat func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'p', print_address},
		{'r', print_rev},
		{'R', print_rot13},
	};

	const int flags = sizeof(func_arr) / sizeof(func_arr[0]);
	int i;

	for (i = 0; i < flags; ++i)
	{
		if (func_arr[i].c == s)
		{
			return (func_arr[i].f);
		}
	}

	return (NULL);
}

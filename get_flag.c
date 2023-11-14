#include "main.h"

/**
 * get_flag - checks if a character is a flag
 * @s: character to check
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: 1 if true, 0 if false
 */
int get_flag(char s, flags_format *f)
{
	switch (s)
	{
		case '+':
		f->plus = 1;
		return (1);
		case ' ':
		f->space = 1;
		return (1);
		case '#':
		f->hash = 1;
		return (1);
	}

	return (0);
}

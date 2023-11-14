#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_format;

/**
 * struct Handler_format - struct containing a character
 * and a function pointer to a function that returns an int
 * and takes a va_list and a flags_format pointer as arguments
 * @c: character to match
 * @f: function pointer to a function that returns an int
 */
typedef struct Handler_format
{
	char c;
	int (*f)(va_list args, flags_format *f);
} switch_fromat;

/* write */
int _putchar(char c);
int _puts(char *str);

/* nums */
int print_int(va_list args, flags_format *f);
void print_number(unsigned int n);
int print_unsigned(va_list args, flags_format *f);
int count_digit(int i);

/* bases */
int print_hex(va_list args, flags_format *f);
int print_HEX(va_list args, flags_format *f);
int print_binary(va_list args, flags_format *f);
int print_octal(va_list args, flags_format *f);
char *convert(unsigned long int num, int base, int lowercase);


/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_format *);

/* get_flag */
int get_flag(char s, flags_format *f);

/* alpha */
int print_string(va_list args, flags_format *f);
int print_char(va_list args, flags_format *f);
int count_string(char *string);

/* custom */
int print_rot13(va_list args, flags_format *f);
int print_S(va_list args, flags_format *f);
int print_rev(va_list args, flags_format *f);


/* percent */
int print_percent(va_list args, flags_format *f);

/* address */
int print_address(va_list args, flags_format *f);

#endif

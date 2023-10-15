#include "main.h"

/**
 * specifier - checks for the specifiers and hundles them.
 * @format: the string
 * @print: the string list
 * Return: cont
 */
int specifier(const char *format, va_list print)
{
	if (*format == 'c')
	{
		return (character(print));
	}
	else if (*format == 's')
	{
		return (string(print));
	}
	else if (*format == '%')
	{
		return (percent());
	}
	else if (*format == 'd')
	{
		return (printf_dec(print));
	}
	else if (*format == 'i')
	{
		return (printf_int(print));
	}
	return (0);
}

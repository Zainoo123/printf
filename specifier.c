#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
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
	else if (*format == 'd' || *format == 'i')
	{
		return (integer(print));
	}
	return (0);
}

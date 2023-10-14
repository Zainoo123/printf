#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
/**
 * _printf - a printf like function
 * @format: the string
 * Return: cont
 */
int _printf(const char *format, ...)
{
	int cont = 0;

	va_list print;

	va_start(print, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			cont += specifier(format, print);
			if (*format && string_checker("cs%di", *format))
			{
				_putchar('%');
				_putchar(*format);
				cont += 2;
			}
		}
		else
		{
			cont += _putchar(*format);
		}
		format++;
	}
	va_end(print);
	return (cont);
}

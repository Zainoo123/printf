#include "main.h"

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

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				cont += specifier(format, print);
				if (*format == '\0')
				{
					break;
				}
				else if (*format && string_checker("cs%di", *format))
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
	}

	va_end(print);
	return (cont);
}

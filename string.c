#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * string - handles strings.
 * @print: the string
 * Return: cont
*/
int string(va_list print)
{
	int cont = 0;

	const char *string = va_arg(print, const char *);

	if (string == NULL)
	{
		const char *null_str = "(null)";

		while (*null_str)
		{
			_putchar(*null_str);
			cont++;
			null_str++;
		}
	}
	else
	{
		while (*string)
		{
			cont += _putchar(*string);
			string++;
		}
	}
	return (cont);
}

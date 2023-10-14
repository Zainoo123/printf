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

	while (*string)
	{
		cont += _putchar(*string);
		string++;
	}
	return (cont);
}

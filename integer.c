#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * integer - return an integer
 * @print: the integer
 * Return: cont
 */
int integer(va_list print)
{
	int cont = 0;

	int integer = va_arg(print, int);

	number_hundler(integer);
	return (cont);
}

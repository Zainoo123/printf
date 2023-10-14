#include "main.h"
/**
 *character - function that prints character
 *@print: arguments
 *Return: count
 */

int character(va_list print)
{
	int cont = 0;
	int character = va_arg(print, int);

	cont += _putchar(character);
	return (cont);

}

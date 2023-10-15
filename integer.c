#include "main.h"
/**
 * print_int - prints %i
 * @print: print
 * Return: cont
 */
int print_int(va_list print)
{
	int x = va_arg(print, int);
	int number, y = x % 10, i, j = 1;
	int cont = 1;

	x = x / 10;
	number = x;

	if (y < 0)
	{
		_putchar('-');
		number = -number;
		x = -x;
		y = -y;
		cont++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			j = j * 10;
			number = number / 10;
		}
		number = x;
		while (j > 0)
		{
			i = number / j;
			_putchar(i + '0');
			number = number - (i * j);
			j = j / 10;
			cont++;
		}
	}
	_putchar(y + '0');

	return (cont);
}

/**
 * print_dec - print %d
 * @print: print
 * Return: cont
 */

int print_dec(va_list print)
{
	int x = va_arg(print, int);
	int number, y = x % 10, i;
	int cont = 1;
	int j = 1;

	x = x / 10;
	number = x;

	if (y < 0)
	{
		_putchar('-');
		number = -number;
		x = -x;
		y = -y;
		cont++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			j = j * 10;
			number = number / 10;
		}
		number = x;
		while (j > 0)
		{
			i = number / j;
			_putchar(i + '0');
			number = number - (i * j);
			j = j / 10;
			cont++;
		}
	}
	_putchar(y + '0');

	return (cont);
}

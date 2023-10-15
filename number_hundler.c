#include "main.h"

/**
 * number_hundler - return the hundler of a number
 * @i: int
 * Return: cont
 */

int number_hundler(int i)
{
	int cont = 0;

	if (i == MY_INT_MIN)
	{
		_putchar('-');
		number_hundler(MY_INT_MAX);
	}

	else if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i == 0)
	{
		_putchar('0');
		cont++;
	}
	else if (i < 10 && i > 0)
	{
		_putchar(i + '0');
		cont++;
	}
	else if (i >= 10)
	{
		number_hundler(i / 10);
		_putchar(i % 10 + '0');
	}
	return (cont);
}

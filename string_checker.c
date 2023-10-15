#include <stdbool.h>

/**
 * string_checker - checkes for something i don't know.
 * @set: mah no importent
 * @c: char
 * Return: boul
*/
bool string_checker(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
	{
		return (false);
	}
		set++;
	}
	return (true);
}

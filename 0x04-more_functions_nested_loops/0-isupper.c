#include <main.h>

/**
 * _isupper - checks whether passed character is uppercase
 * @c: character being checked
 *
 * Return: 1 if it is else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

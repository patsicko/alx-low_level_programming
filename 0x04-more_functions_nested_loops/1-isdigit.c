#include <main.h>

/**
 * _isdigit - checks whether passed character is a digit
 * @c: character being checked
 *
 * Return: 1 if it is else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

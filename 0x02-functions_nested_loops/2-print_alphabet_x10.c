#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 *
 * Return: Always 0 (success .)
 */
 
void print_alphabet_x10(void)
{
	char ch;

	int i;

	for (i = 1; i <= 10; i++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	
	_putchar('\');
}

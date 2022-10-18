#include "main.h"
/**
 * void print_alphabet_x10 - entry point
 *
 * Description:void print_alphabet_x10(void);
 */
void print_alphabet_x10(void)
{
	char ch;

	int i,k;

	for (i = 1; i <= 10; i++)
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
	
	_putchar('\');
}

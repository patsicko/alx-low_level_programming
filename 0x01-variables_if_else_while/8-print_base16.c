#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all base 16
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	char letter;

	for (number = 0; number <= 9; number++)
		putchar(number % 10 + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

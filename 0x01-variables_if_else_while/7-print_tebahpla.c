#include <stdio.h>
/**
 * main - print all letters in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	
	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

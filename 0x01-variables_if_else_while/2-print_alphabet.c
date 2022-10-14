#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print small letters.
 *
 * Return: Always O (Success)
 */
int main(void)
{
	char letter;	

	for (letter = 'a' ; letter <= 'z' ; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

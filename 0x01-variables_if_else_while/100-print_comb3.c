#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the digits of the decimal number system using putchar
 * Return: 0 when code executes succesfully
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 9 && b == 9)
			{
				break;
			}

				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

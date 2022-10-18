#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print n to 98 counts
 *
 * @n: input
 *
 * Return: void
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count >= 98; count--)
			printf("%d, ", count);
	}
	else
	{
		for (count = n; count < 98; count++)
			printf("%d, ", count);

		if(count  == 98)
		{
			break;
		}
		printf("98\n");
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line suing '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('_');
	}

	putchar('\n');
}

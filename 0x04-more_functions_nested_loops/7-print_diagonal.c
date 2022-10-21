#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			putchar(' ');

		putchar('\\');
		putchar('\n');
	}
}

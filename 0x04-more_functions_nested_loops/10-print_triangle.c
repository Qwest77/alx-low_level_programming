#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @n: size of the triaangle
 */
void print_triangle(int n)
{
	int h, tri;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (tri = n - h; tri > 0; tri--)
				putchar(' ');

			for (tri = 0; tri < h; tri++)
				putchar('#');

			if (h == n)
				continue;

			putchar('\n');
		}
	}

	putchar('\n');
}

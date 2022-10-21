#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print num from 0-9
 * Return: Always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar((n % 10) + '0');
	}
	putchar('\n');
}

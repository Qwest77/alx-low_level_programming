#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Arguement count
 * @argv: Arguements
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

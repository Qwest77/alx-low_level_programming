#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	long long int a;
	long int b;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(float));
	return (0);
}

#include "main.h"
/**
 * _memcpy - a untion that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copies
 * @n: number of bytes
 * Return: copied memory with n bytred changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

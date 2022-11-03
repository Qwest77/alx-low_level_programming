/*
 * File: 2-strain_recursion.c
 * Auth: smane
 */
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be mearsured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
return (len);
}

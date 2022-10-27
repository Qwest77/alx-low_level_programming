#include "main.h"

/**
 * _strcmp - compares two strings values
 * @sl: string 1
 * @s2: string 2
 * Return: the difference in s1 and s2
 */
int _strcmp(char *sl, char *s2)
{
	int i;

	i = 0;
	while (sl[i] != '\0' && s2[i] != '\0')
	{
		if (sl[i] != s2[i])
		{
			return (sl[i] - s2[i]);
		}
	i++;
	}
	return (0);
}

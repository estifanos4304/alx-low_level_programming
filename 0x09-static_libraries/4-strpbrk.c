#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string to receive
 * @accept: bytes to accept
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int i;

	while (*s != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*s == *(accept + j))
				i = 1;
		}
		j = 0;
		if (i == 1)
			return (s);
		s++;
	}
	return (NULL);
}


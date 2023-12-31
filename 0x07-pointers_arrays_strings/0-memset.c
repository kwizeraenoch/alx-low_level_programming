#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

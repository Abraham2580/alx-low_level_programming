#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to memory area to be filled
 * @b: character to fill memory area with
 * @n: number of bytes to be filled
 * Return: pointer to filled memory area @s
 */
char *_memset (char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}


#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9.
 * @c: input character.
 * Return: 1 if is a digit from 0 to 9, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

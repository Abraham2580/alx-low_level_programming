#include "main.h"
/**
 * _islower- This is to check if the alphabet is lower case
 * Return: return 1 if lowercase
 * @c: it is an ascii character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

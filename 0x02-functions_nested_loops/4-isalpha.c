#include "main.h"
/**
 * _isalpha- checks if a character is alphabert
 * Return: returns 1 if true
 * @c: ci= is an ascii character
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

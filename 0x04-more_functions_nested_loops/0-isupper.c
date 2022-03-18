<<<<<<< HEAD

#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
=======
 #include "main.h"
/**
 * _isupper - evalue if letter is uppercase .
 *@c: print int
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

else
{
return (0);
}

}
>>>>>>> 8ca7219024f09d6765b6bc42f4dfae05624712c3

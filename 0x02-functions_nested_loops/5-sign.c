#include "main.h"
/**
 * print_sign- tells what sign a number carries
 * Return: returns + if carrying +
 * @n: n is an integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

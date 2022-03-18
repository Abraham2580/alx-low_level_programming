#include "main.h"

/**
 * print_numbers - print 0 to 9 followed by a newline
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

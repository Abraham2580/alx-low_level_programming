#include "main.h"
/**
 * print_alphabet_x10- it should print the alphabet 10 times
 * Return: it shouldnt return anything
 */
void print_alphabet_x10(void)
{
	char letter;
	int times = 0;

	while (times < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		times++;
	}
}

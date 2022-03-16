#include "main.h"
/**
 * print_alphabet-This is the function to print all the alphabet
 * Return: it shouldnt return any value
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

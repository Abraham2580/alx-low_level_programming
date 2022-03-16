#include "main.h"
/**
 * main- This is the main function
 * Return: it should return a value of 0
 */
int main(void)
{

	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

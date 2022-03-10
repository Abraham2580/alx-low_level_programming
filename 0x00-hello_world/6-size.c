#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/**
 * main- This is my main function
 * Return: It must be a value of 0
 */
int main(void)
{
	char alx_char = 'A';
	int alx_int = 3;
	long int alx_longI;
	long long int alx_long_longI;
	float alx_float = 2.4;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

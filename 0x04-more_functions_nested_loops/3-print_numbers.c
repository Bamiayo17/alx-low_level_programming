#include "main.h"
/**
 * Print_numbers - checks for a digit (0 through 9)
 * Return: Always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
}

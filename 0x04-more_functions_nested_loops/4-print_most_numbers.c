#inclde "main.h"
/**
 * print_most_numbers - checks for a digit (0 through 9, excluding 2 and 4
 *
 *Return: Always 0.
 */
voidprint_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
	if (c != 50)
	{
	if (c != 52)
	{
	_putchar(c);
	}
	}
	}
	_putchar('\n');


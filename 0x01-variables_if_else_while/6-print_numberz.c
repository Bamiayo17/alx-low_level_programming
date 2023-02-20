#include <stdio.h>
#include <stdlib.h>

/**
  * main = returns all single digit numbers of base 10 starting 0
  *
  * Returns: Always 0 (Success)
  */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return(0);
}

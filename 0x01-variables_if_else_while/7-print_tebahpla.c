#include <stdio.h>
#include <stdlib.h>

/**
  * main = returns all single digit numbers of base 10 starting 0
  *
  * Returns: Always 0 (Success)
  */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return(0);
}

#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c = c - 1;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}

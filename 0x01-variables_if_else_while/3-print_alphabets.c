#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	do {
		putchar (c);
		c = c + 1;
	} while (c <= 'z');
	c = 'A';
	do {
		putchar (c);
		c = c + 1;
	} while (c <= 'Z');
	putchar ('\n');
	return (0);
}

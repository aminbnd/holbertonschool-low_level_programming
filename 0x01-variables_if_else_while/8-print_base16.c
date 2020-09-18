#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 *
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i = i + 1;
	}
	while (c < 'g')
	{
		putchar (c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}

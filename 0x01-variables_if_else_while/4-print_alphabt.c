#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c = c + 1)
	{
		if (c != 'q' && c != 'e')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}

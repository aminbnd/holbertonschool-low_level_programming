#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = a * 10 + b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar ('0' + a);
			putchar ('0' + b);
			if (c < 89)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}


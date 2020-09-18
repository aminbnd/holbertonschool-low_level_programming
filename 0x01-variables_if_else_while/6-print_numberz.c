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

	do {
		putchar(i);
		i = i + 1;
	} while (i < 10);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (sucess)
 */
int main(void)
{
	int i = 1;
	int j = 0;

	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}

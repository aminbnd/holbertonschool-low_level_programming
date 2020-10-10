#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: integer, arguments number
 * @argv: vector, array of string
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc > 1)
	{
		while (--argc)
		{
			for (i = 0; argv[argc][i]; i++)
			{
				if (!isdigit(argv[argc][i]))
				{
					puts("Error");
					return (1);
				}
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

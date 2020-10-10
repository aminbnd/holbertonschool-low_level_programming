#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: integer, number of arguments
 * @argv: vector, array of string
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

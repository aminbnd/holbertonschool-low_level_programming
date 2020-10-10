#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: integer, number ofarguments
 * @argv: vector, array os string
 * Return: 0 (success): exit(EXIT_SUCCESS)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

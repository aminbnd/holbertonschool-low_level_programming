#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: integer, number of arguments
 * @argv: vector, array of string
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

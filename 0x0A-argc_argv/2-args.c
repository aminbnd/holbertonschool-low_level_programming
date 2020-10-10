#include <stdio.h>
/**
 * main - prints all arguments that the program receives
 * @argc: integer, arguments number
 * @argv: vector, array of string
 * Return: 0(success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

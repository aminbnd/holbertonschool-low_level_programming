#include "3-calc.h"
/**
 * main - Entry point performs simple operations
 * @argc: number of aguments
 * @argv: vector, array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		puts("Error");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		puts("Error");
		exit(100);
	}
	result = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

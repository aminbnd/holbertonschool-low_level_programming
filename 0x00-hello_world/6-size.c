#include <stdio>
/**
* main - Entry point
*
* Return: 0
*
*/
int main(void)
{
char c;
int i;
long l;
double d;
float f;
printf("Size of a char: %i byte(s)\n", sizeof(c));
printf("Size of an int: %i byte(s)\n", sizeof(i));
printf("Size of a long int: %i byte(s)\n", sizeof(l));
printf("Size of a long long int: %i byte(s)\n", sizeof(d));
printf("Size of a float: %i byte(s)\n", sizeof(f));
return (0);
}

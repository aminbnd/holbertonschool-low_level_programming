#include <stdio.h>
/**
 * printbeforemain - prints before main is executed
 * Return: Void
 */
void printbeforemain(void) __attribute__((constructor));
void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

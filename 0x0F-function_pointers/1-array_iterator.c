#include "function_pointers.h"
/**
 * array_iterator - function that execute actions on elements of an array
 * @array: pointer to array
 * @size: size of array
 * @action: function to applay (pointer)
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

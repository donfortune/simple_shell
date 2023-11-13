#include "main.h"

/**
 * bfree - free
 * @ptr: add
 *
 * Return: 1
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

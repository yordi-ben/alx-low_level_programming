#include "main.h"

/**
 * swap_int - function that swaps the value of two integers.
 * 0a: this is the first entry
 * 0b: this is the second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}


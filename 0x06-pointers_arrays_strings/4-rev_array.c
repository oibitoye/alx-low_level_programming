#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: Returns void
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}


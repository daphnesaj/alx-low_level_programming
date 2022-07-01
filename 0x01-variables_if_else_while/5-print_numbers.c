#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;
int size = sizeof(numbers) / sizeof(*numbers);

	for (i = 0; i < size; i++)
	{
		printf("%d", numbers[i]);
	}

	putchar('\n');

	return (0);
}

#include "main.h"
/**
 * print_buffer - c function that prints the content of an
 * inputted numbers of bytes from buffer
 * Prints 10 bytes per line
 * Starts with the position of the fisrt byte in hexadecimal (8 chars),
 * Starting with '0'
 * Eachline shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer
 * Prints the bytes if it is printable; if not, prints '.'
 * Each line end with a new line '\n'
 * If the inputed byte is 0 or less, the function only prints a new line
 * @b: numbers of bytes
 * @size: size of the bytes
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}

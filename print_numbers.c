#include  "main.h"

/**
 * print_numbers- helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_numbers(int n)
{
	unsigned int n1;

	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}
	else
	n1 = n;

	if (n1 / 10)
	print_numbers(n1 / 10);
	_putchar((n1 % 10) + '0');
}

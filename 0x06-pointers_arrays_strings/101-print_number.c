#inlude "main.h"

/**
 * print _number - print numbers chars
 * @n: integers params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int nl;

	n1 = n;
	if (n < 0)
	{

		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

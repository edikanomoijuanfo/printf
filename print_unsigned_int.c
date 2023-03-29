#include "main.h"

/**
* print_unsigned_int - Function to print unsugned int
* @args: argument passed
* Return: total count of the unsigned int
*/

int print_unsigned_int(va_list args)
{	int count = 0;
	int i = 0;
	int j;
	char digits[20];
	unsigned int n;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n > 0)
	{
		digits[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j]);
		count++;
	}
	return (count);
}

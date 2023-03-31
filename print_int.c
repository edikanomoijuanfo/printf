#include "main.h"

/**
* print_int - function to prints number
* @args: the value to print from
* Return: the total count of number
*/

int print_int(va_list args)
{	int n;
	int count = 0;
	char digit;
	int div = 1;

	n = va_arg(args, int);
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		count++;
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		digit = (char)((n / div) + '0');
		_putchar(digit);
		count++;
		n %= div;
		div /= 10;
	}
	return (count);
}


#include "main.h"

/**
* print_dec - function to prints number
* @args: the value to print from
* Return: the total count of number
*/

int print_dec(va_list args)
{	unsigned int k;
	int n;
	int count = 0;
	int div = 1;

	n = va_arg(args, int);
	if (n < 0)
	{
		k = n * -1;
		count += _putchar('-');
	}
	else
	k = n;
	for (; k / div > 9; )
	{
		div *= 10;
	}
	for (; div != 0;)
	{
		count = _putchar('0' + k / div);
		k %= 10;
		div /= 10;
	}
	return (count);
}


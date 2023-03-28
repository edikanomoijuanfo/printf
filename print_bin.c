#include "main.h"
/**
* print_bin - Function to convert to binary
* @args: argument passed
* Return: Total count of output
*/

int print_bin(va_list args)
{	int i = 0;
	int j;
	unsigned int n;
	int count = 0;
	char bn[50];

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	while (n > 0)
	{
		bn[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(bn[j] + '0');
	}
	return (count);
}


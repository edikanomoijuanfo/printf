#include "main.h"
/**
* print_bin - Function to convert to binary
* @args: argument passed
* Return: Total count of output
*/

int print_bin(va_list args)
{	int i = 0;
	int j;
	int bn[40];
	int n;
	int count = 0;

	n = va_arg(args, int);
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


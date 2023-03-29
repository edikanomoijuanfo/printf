#include "main.h"

/**
* print_hex - function to hexadecimal
* @args: value to convert
* Return: hexadeximal
*/

int print_hex(va_list args)
{	int i = 0;
	int count = 0;
	int j;
	char hex[100];
	int temp;
	int n;

	n = va_arg(args, int);
	while (n != 0)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
		{
			hex[i++] = temp + 48;
		}
		else
		{
			hex[i++] = temp + 'a' - 10;
		}
		count++;
		n /= 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (count);
}

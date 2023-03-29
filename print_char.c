#include "main.h"

/**
* print_char - Function to print char
* @args: argument
* Return: the number of count of character
*/

int print_char(va_list args)
{	
	int count;
	char c;

	c = va_arg(args, int);
	if (c)
	{
		count = write(1, &c, 1);
	}
	return (count);
}

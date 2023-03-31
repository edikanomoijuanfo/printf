#include "main.h"

/**
* print_pointer - to print pointer to address
* @args: argument passed
* Return: The pointer to address
*/

int print_pointer(va_list args)
{	unsigned long int address;
	void *ptr;
	int hex;
	int i;
	int count = 0;

	ptr = va_arg(args, void *);
	address = (unsigned long int) ptr;
	_putchar('0');
	_putchar('x');
	for (i = sizeof(address) * 2 - 1; i >= 0; i--)
	{
		hex = (address >> (i * 4)) & 0xf;
		if (hex < 10)
		{
			_putchar(hex + '0');
		}
		else
		{
			putchar(hex - 10 + 'a');
		}
		count++;
	}
	return (count);
}
		

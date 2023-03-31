#include "main.h"

/**
* rev_string - To print string in reverse
* @args: The variable to print from
* Return: print string in reverse
*/

int rev_string(va_list args)
{	int count = 0;
	char *s;
	int i;

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	while (*(s + count) != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
	_putchar(*(s + i));
	}

	return (count);

}

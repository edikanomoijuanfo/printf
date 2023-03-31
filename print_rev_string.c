#include "main.h"

/**
* rev_string - To print string in reverse
* @args: The variable to print from
* Return: print string in reverse
*/

int rev_string(va_list args)
{	int l, i, k;
	char *s;

	l = 0;
	i = 0;
	char j;

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	while (s[i++])
	l++;

	for (k	= l - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	return (l);

}

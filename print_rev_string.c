#include "main.h"

/**
* rev_string - To print string in reverse
* @s: The variable to print from
* Return: print string in reverse
*/

int rev_string(va_list args)
{	int l, i;
	char *s;
	l = 0;
	i = 0;

	s = va_arg(args, char *);
	while (s[i++])
	l++;

	for (i	= l - 1; i >= l / 2; i--)
	{
	char j = s[i];

	s[i] = s[l - i - 1];
	s[l - i - 1] = j;
	}
	return (l);

}

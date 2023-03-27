#include "main.h"

/**
* print_char - Function to print char
* @args: argument
* Return: the number of count of character
*/

int print_char(va_list args)
{	int count = 0;
	char c;

	c = va_arg(args, int);
	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}

/**
* print_pc - to print '%, when call upon
* @args: argument
* Return: ...
*/

int print_pc(va_list args)
{	(void)args;

	write(1, "%", 1);
	return (1);
}

/**
 * print_string - to print string to the standard output when called upon
 * @args: the arguments
 * Return: Total count of string
 */

int print_string(va_list args)
{
	int i = 0;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}
	return (count);
}





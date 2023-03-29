#include "main.h"

/**
 * print_string - to print string to the standard output when called upon
 * @args: the arguments
 * Return: Total counts of string
 */

int print_string(va_list args)
{
	int i = 0;
	int value;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		value = write(1, &str[i], 1);
		i = i + 1;
		count += value;
	}
	return (count);
}

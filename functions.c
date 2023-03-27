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
 * @args: the argument
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









int print_integer(va_list args)
{	char buffer[20];
	int i = 0, is_negative = 0;
	int count = 0, int value;
	num = va_arg(args, int);
	if (num == 0)
	{
        value = write(1, '0', 1);
        count += value;
        return (count);
        }

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		buffer[i++] = num % 10 + '0';
        	num /= 10;
        }

	if (is_negative)
    	{
		value = write(1, '-', 1);
	}

	while (i > 0)
	{
        value = write(1, &buffer[--i], 1);
        count += value;
        return count;
	}


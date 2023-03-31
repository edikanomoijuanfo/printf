#include "main.h"

/**
 * _printf - function to print to the stnadard output
 * @format: foramt specifier
 * @...: arguments passed.
 * Return: total count of the character
 */
int _printf(const char *format, ...)
{	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			i++;
			count += value;
			continue;
		}
		if (format[i] == '%')
		{
			f = checkspecifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				i = i + 2;
				count += value;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				i = i + 2;
				count += value;
				continue;
			}
		}
		i++;
	}
	return (count);
}


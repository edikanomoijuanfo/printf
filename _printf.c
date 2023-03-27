#include "main.h"

/**
 * _printf - function to print to the stnadard output
 * @format: foramt specifier
 * @...: arguments passed
 * Return: Return: total count of the output
 */

int _printf(const char *format, ...)
{	int i = 0, count = 0, value = 0;
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
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = checkspecifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			break;

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count += value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}

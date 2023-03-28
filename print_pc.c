#include "main.h"



/**
* print_pc - to print '%, when call upon
* @args: argument
* Return: ...
*/

int print_pc(va_list args)
{	int count;

	(void)args;

	count = write(1, "%", 1);
	return (count);
}


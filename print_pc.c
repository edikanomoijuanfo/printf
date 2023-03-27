#include "main.h"



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


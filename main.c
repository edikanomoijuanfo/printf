#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
* main - To test the function
* @void: argument
* Return: 0 always sucess
*/

int main(void)
{	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0,
	count7 = 0, count8 = 0;
	int num1, num2, num3, num4;
	count1 = _printf("%c\n", 'F');
	count6 = printf("%c\n", 'F');
	printf("The total number of count1 is:%d\n", count1);
	printf("The total number of count6 is:%d\n", count6);
	count2 = _printf("%s\n", "Olalekan");
	count4 = printf("%s\n", "Olalekan");
	printf("The total number of count2 is:%d\n", count4);
	printf("The total number of count4 is:%d\n", count2);
	count3 = _printf("%%\n", '%');
	count8 = printf("%%\n", '%');
	printf("The total number of count3 is:%d\n", count3);
	printf("The total number of count3 is:%d\n", count8);
	count5 = _printf("The boy is good\n");
	count7 = printf("The boy is good\n");
	printf("The total number of count5 is:%d\n", count5);
	printf("The total number of count7 is:%d\n", count7);

	_printf("%i\n", 92);
	num2 = _printf("%i\n", -98);
	num1 = printf("%i\n", -98);
	printf("total count std : %i\n", num1);
	printf("total handmade count : %i\n", num2);

	num3 = _printf("%d\n", 92);
	_printf("%d\n", -98);
	num4 = printf("%d\n", 92);
	printf("total count std : %d\n", num3);
	_printf("total handmade count : %d\n", num4);

	_printf("%b\n", 98);


	_printf("%x\n", 99998);
	_printf("%X\n", 99998);






	_printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");

































	return (0);
}

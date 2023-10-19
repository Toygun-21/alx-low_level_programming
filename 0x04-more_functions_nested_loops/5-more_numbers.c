#include "main.h"
/**
 * more_numbers - Entry point
 * Description: Prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int n = 0,d;
while (n < 14)
{ 
for(d = 0;d <= 14;d++)
{_putchar(d + '0'); 
_putchar('\n');
}
_putchar('\n');
n++;
}
return;
}

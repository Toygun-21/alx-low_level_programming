#include "main.h"
/**
* function- prints the sign of a number. thus, (+) if n greater than 0, (0) if n is 0 and (-) if n is less than zero.
* Arg- int n
* Always return 0
*/
int print_sign(int n)
{
if(n > 0)
{
_putchar("+");
return (1);
}
elseif(n == 0)
{
_putchar("0");
return (0);
}
else
{
_putchar("-");
return (-1);
}
return (0);
}


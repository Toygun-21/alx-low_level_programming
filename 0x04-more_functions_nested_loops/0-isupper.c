#include "main.h"
/**
* function- checks upper case characters and returns a value (1) if tru and (0) if false
*@c is the arg of the function
*Always return 0
*/
int _isupper(int c)
{
	int i;
	for(i = 'A';i <= 'Z';i++)
	{  if(i == 'A' && i <= 'Z')
	   {
		 return (1);
	   }
	   else
	   { return (0); }
	return (i);
	}
	return (0);
}

#include "main.h"
/**
main- print a function that print the alphabets in lowercase 10 times

Always- Return 0
*/
void print_alphabet_x10(void)
{	char i = 0 , p;
	 while(i <= 10)
        {	for(p='a';p<='z';p++)
		{ _putchar(p); }
	 _putchar('\n');
          i++;
	} 
	return;
}

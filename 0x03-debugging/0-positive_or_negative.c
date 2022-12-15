#include "main.h"
/**
* positive_or_negative - this func checks if the random num is
* positive, negative, or zero
* and prompts user accordingly
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
main - for entry point
return - for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if(n>0)
	{
		printf("\n is positive");
	}
	if(n<0)
	{
		printf("\n is negative");
	}
	else
	{
		printf("\n is zero")
	}
	return (0);
}

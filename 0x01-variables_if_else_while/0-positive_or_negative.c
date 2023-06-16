#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* 
*main - for entry point
*return - for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if(n>0)
	{
		printf("is positive\n");
	}
	if(n<0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}

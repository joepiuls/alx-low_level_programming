#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, nums, add = 0;

	for (num = 1; num < argc; num++)
	{
		for (nums = 0; argv[num][nums]; nums++)
		{

			if (argv[num][nums] < '0' || argv[num][nums] > '9')
			{
				printf("Error\n");
				return (0);
			}
			add += atoi(argv[num]);
		}
		printf("%d\n", add);
		return (0);
	}

}

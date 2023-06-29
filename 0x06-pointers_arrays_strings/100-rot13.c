#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 *
 * @str: string.
 * Return: string.
 */
char *rot13(char *str)
{
	char *r = str;
  	int i;

  	for (i = 0; str[i] != '\0'; i++)
	{
    		int c = str[i];

    		if (c >= 'a' && c <= 'z')
		{
      			c = c + 13;
      			if (c > 'z')
			{
        			c -= 26;
      			}
    		}
		else if (c >= 'A' && c <= 'Z')
		{
      			c = c + 13;
      			if (c > 'Z')
			{
        			c -= 26;
      			}
    		}
    		r[i] = c;
	}
	return (str);
}

#include "main.h"
#include <stddef.h>

/**
 * _strlen - determine string length
 * @str: string to be used
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to be created in the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fl, wrt;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrt = write(fl, text_content, _strlen(text_content));
		if (wrt == -1)
		{
			close(fl);
			return (-1);
		}
		close(fl);
		return (1);
	}
	else
	{
		close(fl);
		return (1);
	}
}

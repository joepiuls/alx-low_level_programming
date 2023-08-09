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
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content to be appended
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wrt;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
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

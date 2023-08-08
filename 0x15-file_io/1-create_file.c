#include "main.h"
#include <stddef.h>

/**
 * _strlen - dtermines the string length
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
 * @text_content: content of the file which would be created
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
    int fls, wrt;

    if (filename == NULL)
        return (-1);
    fls = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fls == -1)
        return (-1);
    if (text_content != NULL)
    {
        wrt = write(fls, text_content, _strlen(text_content));
        if (wrt == -1)
        {
            close(fls);
            return (-1);
        }
        close(fls);
        return (1);
    }
    else
    {
        close(fls);
        return (1);
    }
}

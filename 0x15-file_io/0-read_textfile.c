#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the std output
 * @filename: name of the file
 * @letters:  no of letters to be printed
 *
 * Return: no of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fls, fread, wrt;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fls = open(filename, O_RDONLY);
	if (fls == -1)
		return (0);
	fread = read(fls, buffer, letters);
	if (fread == -1)
		return (0);
	buffer[fread] = '\0';
	wrt = write(STDOUT_FILENO, buffer, fread);
	if (wrt != fread)
		return (0);
	free(buffer);
	close(files);
	return (fread);
}

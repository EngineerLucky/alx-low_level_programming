#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Write a function that prints it to the posix
 * stadrd point or Read text file print to STDOUT.
 * @filename: text file being to be read
 * @letters: the number of letters to be read
 * Return: should w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

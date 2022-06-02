#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and writes it to standoutput
 * @filename: the name of the file to read
 * @letters: the number of character to read from the file
 *
 * Return: 0 if filename or buffer is NULL, or
 * open, read and write function fails
 * on success, return the write output.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buf;
	
	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	
	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);

	return (wr);
}

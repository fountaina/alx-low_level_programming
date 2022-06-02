#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of string
 * @str: the string
 *
 * Return: int length
 */
size_t  _strlen(char *str)
{
	size_t i = 0;
	
	if (str == NULL)
		return (i);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - creates a file and writes to it.
 * @filename: the name of the file
 * @text_content: content to be written to the new file.
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, _strlen(text_content));
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}

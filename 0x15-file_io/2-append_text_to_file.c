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
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: what to add to the file.
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND, 0664);
	wr = write(op, text_content, _strlen(text_content));
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);

}

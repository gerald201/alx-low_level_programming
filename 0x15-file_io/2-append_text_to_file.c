#include "main.h"

/**
 * _strlen - finds the length of a string
 * author: Gerald
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y;
	ssize_t lenz;

	if (filename == NULL)
		return (-1);
	y = open(filename, O_WRONLY | O_APPEND);
	if (y == -1)
		return (-1);
	if (text_content != NULL)
		lenz = write(y, text_content, _strlen(text_content));
	close(y);
	if (lenz == -1)
		return (-1);
	return (1);
}

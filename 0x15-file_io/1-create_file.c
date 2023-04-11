#include "main.h"

/**
 * _strlen - finds the length of a string
 * author: NerFLee
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t b;

	for (b = 0; str[b]; b++)
		;
	return (b);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int c;
	ssize_t lenz = 0;

	if (filename == NULL)
		return (-1);
	c = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (c == -1)
		return (-1);
	if (text_content != NULL)
		len = write(c, text_content, _strlen(text_content));
	close(c);
	if (lenz == -1)
		return (-1);
	return (1);
}

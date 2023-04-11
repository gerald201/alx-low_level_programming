#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * author: Gerald
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t lenx, lenz;
	char *buff;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(a);
		return (0);
	}
	lenx = read(a, buff, letters);
	close(c);
	if (lenx == -1)
	{
		free(buff);
		return (0);
	}
	lenz = write(STDOUT_FILENO, buff, lenx);
	free(buff);
	if (lenx != lenz)
		return (0);
	return (lenz);
}


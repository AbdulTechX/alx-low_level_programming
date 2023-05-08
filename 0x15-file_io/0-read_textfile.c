#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_r, len_w;
	char *memory;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	memory = malloc(sizeof(char) * letters);
	if (memory == NULL)
	{
		close(fd);
		return (0);
	}
	len_r = read(fd, memory, letters);
	close(fd);
	if (len_r == -1)
	{
		free(memory);
		return (0);
	}
	len_w = write(STDOUT_FILENO, memory, len_e);
	free(memory);
	if (len_r != lenw)
		return (0);
	return (len_w);
}

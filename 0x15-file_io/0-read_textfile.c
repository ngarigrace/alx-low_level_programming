#include "main.h"
/**
  *read_textfile - a function that reads a text file
  *and prints it to the POSIX standard output
  *@filename: str ptr to filename
  *@letters: no of letters
  *Return:no of letters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(fd);
	free(buf);

	return (w);
}

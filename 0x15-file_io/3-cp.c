#include "main.h"
#include <stdio.h>
/**
  *errors_file - check if file is opened and handle
  *errors
  *@file_from: initial file
  *@argv: arg vector
  *@file_to: dest file to cp to
  *Return: void
  */
void errors_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
  *main - cp cont of a file from one to another
  *@argc: arg count
  *@argv: arg vector
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nc, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors_file(file_from, file_to, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(file_from, buf, 1024);
		if (nc == -1)
			errors_file(-1, 0, argv);
		w = write(file_to, buf, nc);
			if (w == -1)
			errors_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

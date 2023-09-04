#include "main.h"
/**
  *append_text_to_file -  function that appends text at the end of a file
  *@text_content: cont to be appended to file
  *@filename: name of file to append
  *Return: 1 on success and -1 if not
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nl, rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
		rw = write(fd, text_content, nl);

		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

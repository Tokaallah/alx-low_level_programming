#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	/** Check if filename is NULL */
	if (!filename)
		return (-1);

	/** Create or truncate the file and get a file descriptor */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/** Check if open failed */
	if (fd == -1)
		return (-1);

	/** If text_content is NULL, set it to an empty string */
	if (!text_content)
		text_content = "";

	/** Count the number of letters in text_content */
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	/** Write the contents of text_content to the file */
	rwr = write(fd, text_content, nletters);

	/** Check if write failed */
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

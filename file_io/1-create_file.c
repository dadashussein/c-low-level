#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, length, wrotechars;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	length = 0;
	while (text_content[length])
		length++;
	wrotechars = write(file, text_content, length);
	close(file);
	if (wrotechars != length)
		return (-1);
	return (1);
}

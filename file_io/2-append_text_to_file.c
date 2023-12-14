#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text end file
 * @filename: name file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, length, wrotechars;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	length = 0;
	while (text_content[length] != '\0')
		length++;
	wrotechars = write(file, text_content, length);
	close(file);
	if (wrotechars != length)
		return (-1);
	return (1);
}
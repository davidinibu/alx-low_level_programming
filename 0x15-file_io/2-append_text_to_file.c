#include "main.h"

/**
 * append_text_to_file - Append the text at d end of the file.
 * @filename: A pointr to d name of d file.
 * @text_content: d string to add to d end of d file.
 *
 * Return: If d function fails or filename is NULL - -1.
 *         If d file doesnt exist the user will lack d write permission - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

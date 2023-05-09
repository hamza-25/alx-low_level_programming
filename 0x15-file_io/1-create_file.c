#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * create_file -  create a file and add content
 * @filename: name of the file
 * @text_content: content to be add into the file
 * Return: return 1 on succees or -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	ssize_t wr = 0;
	int ln;

	ln = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w");
	if (!fp)
		return (-1);
	if (ln)
	{
		wr = fwrite(text_content, sizeof(text_content), ln, fp);
		if (wr != ln)
			return (-1);
	}
	fclose(fp);
	return (1);
}

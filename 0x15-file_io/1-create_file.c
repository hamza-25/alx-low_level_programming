#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file -  create a file and add content
 * @filename: name of the file
 * @text_content: content to be add into the file
 * Return: return 1 on succees or -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int wr;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w");
	if (!fp)
		return (-1);
	if (text_content)
	{
		for (int i = 0; *text_content;)
		{
			text_content++;
			i++;
		}
		wr = fwrite(text_content, sizeof(char), i, fp);
		if (wr == -1)
			return (-1);
	}
	fclose(fp);
	return (1);
}

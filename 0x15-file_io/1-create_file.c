#include <unistd.h>
#include <fcntl.h>
#include "main.h"


/**
 * create_file -  create a file and add content
 * @filename: name of the file
 * @text_content: content to be add into the file
 * Return: return 1 on succees or -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wr = 0;
	ssize_t ln;
	
	for (ln = 1; *text_content; )
	{
		text_content++;
		ln++;
	}
	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (ln)
	{
		wr = write(fp, text_content, ln);
	}
	close(fp);
	if(wr == ls)
		return (1);
	return (-1);
}

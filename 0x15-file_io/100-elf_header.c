#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include "main.h"

/**
 * magic - print bytes magic
 * @l: header struct
*/
void magic(Elf64_Ehdr l)
{
	int j;

	printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%2.2x", l.e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * main -  program elf file
 * @argc: number of args
 * @argv: array of string
 * Return: return 1 on succees or -1 if fails
 */
int main(int argc, char **argv)
{
	int f_d;
	Elf64_Ehdr l;
	ssize_t bytes;

	if (argc != 2)
		dprintf(STDERR_FILENO, "elf header file error\n"), exit(98);
	f_d = open(argv[1], O_RDONLY);
	if (f_d == -1)
		dprintf(STDERR_FILENO, "file can't open: %s\n", argv[1]), exit(98);
	bytes = read(f_d, &l, sizeof(l));
	if (bytes < 1 || bytes != sizeof(l))
		dprintf(STDERR_FILENO, "can't read: %s\n", argv[1]), exit(98);
	if (l.e_ident[1] == 'E' && l.e_ident[0] == 0x7f && l.e_ident[2] == 'L' &&
			l.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Error elf file: %s\n", argv[1]), exit(98);
	magic(l);
	return (0);
}

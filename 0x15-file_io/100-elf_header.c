#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * display_elf_header - displays information contained i the ELF
 * @header: header of the file
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - displays the information contained in the ELF header
 * @argc: no of arguments passes
 * @argv: list of arguments
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file '%s': %s\n", argv[1], strerror(errno));
		return (98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error reading file '%s': %s\n", argv[1], strerror(errno));
		close(fd);
		return (98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "File '%s' is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}
	display_elf_header(&header);
	close(fd);
	return (0);
}


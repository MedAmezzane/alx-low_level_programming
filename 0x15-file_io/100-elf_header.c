#include <stdio.h>
#include <elf.h>
#include "main.h"

#define REVERSE_ENDIANNESS(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))

/**
 * verify_elf - Verify the file to check if it's an ELF.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void verify_elf(unsigned char *e_ident)
{
	if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
		*(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: This file is not a valid ELF\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * print_magic - Print the magic number.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void print_magic(unsigned char *e_ident)
{
	int i;
	int limit;

	limit = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (i = 0; i < limit; i++)
		printf("%02x ", *(e_ident + i));
	printf("%02x\n", *(e_ident + i));
}

/**
 * print_class - Print the class of the ELF.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - Print the type of data.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * print_version - Print the version of the file.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - Print the OSABI.
 * @e_ident: The ELF struct.
 * Return: No return, it's a void function.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_type - Print the type.
 * @e_ident: The ELF struct.
 * @e_type: Data to compare and print.
 * Return: No return, it's a void function.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	e_ident[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
		break;
	}
}

/**
 * print_entry - Print the entry point.
 * @e_ident: The ELF struct.
 * @e_entry: The data to print.
 * Return: No return, it's a void function.
 */
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = REVERSE_ENDIANNESS(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", e_entry);
}

/**
 * main - Read an ELF file.
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd, bytes_read, close_result;
	Elf64_Ehdr *elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <file_name>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (!elf_header)
	{
		dprintf(STDERR_FILENO, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(elf_header);
		exit(EXIT_FAILURE);
	}

	bytes_read = read(fd, elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		free(elf_header);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	verify_elf(elf_header->e_ident);
	print_magic(elf_header->e_ident);
	print_class(elf_header->e_ident);
	print_data(elf_header->e_ident);
	print_version(elf_header->e_ident);
	print_osabi(elf_header->e_ident);
	printf("  ABI Version:             %i\n", elf_header->e_ident[EI_ABIVERSION]);
	print_type(elf_header->e_type, elf_header->e_ident);
	print_entry(elf_header->e_entry, elf_header->e_ident);

	free(elf_header);

	close_result = close(fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(EXIT_FAILURE);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *message);
void print_elf_header(Elf64_Ehdr *header);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char ei_class);
void print_data(unsigned char ei_data);
void print_version(unsigned char ei_version);
void print_osabi(unsigned char ei_osabi);
void print_abiversion(unsigned char ei_abiversion);
void print_type(uint16_t e_type);
void print_entry(uint64_t e_entry);

/**
 * main - Entry point for the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't read from file");
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		close(fd);
		print_error("Error: Can't read ELF header");
	}

	check_elf(header.e_ident);
	print_elf_header(&header);

	close(fd);
	return (0);
}

/**
 * print_error - Prints an error message and exits with status code 98.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: The ELF identification bytes.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
	    e_ident[EI_MAG1] != ELFMAG1 ||
	    e_ident[EI_MAG2] != ELFMAG2 ||
	    e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
	}
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: The ELF header.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	print_magic(header->e_ident);
	print_class(header->e_ident[EI_CLASS]);
	print_data(header->e_ident[EI_DATA]);
	print_version(header->e_ident[EI_VERSION]);
	print_osabi(header->e_ident[EI_OSABI]);
	print_abiversion(header->e_ident[EI_ABIVERSION]);
	print_type(header->e_type);
	print_entry(header->e_entry);
}

/**
 * print_magic - Prints the magic numbers of the ELF header.
 * @e_ident: The ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the class of the ELF header.
 * @ei_class: The ELF class.
 */
void print_class(unsigned char ei_class)
{
	printf("Class:                             ");
	switch (ei_class)
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", ei_class);
	}
}

/**
 * print_data - Prints the data encoding of the ELF header.
 * @ei_data: The ELF data encoding.
 */
void print_data(unsigned char ei_data)
{
	printf("Data:                              ");
	switch (ei_data)
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", ei_data);
	}
}

/**
 * print_version - Prints the version of the ELF header.
 * @ei_version: The ELF version.
 */
void print_version(unsigned char ei_version)
{
	printf("Version:                           %d (current)\n", ei_version);
}

/**
 * print_osabi - Prints the OS/ABI of the ELF header.
 * @ei_osabi: The ELF OS/ABI.
 */
void print_osabi(unsigned char ei_osabi)
{
	printf("OS/ABI:                            ");
	switch (ei_osabi)
	{
		case ELFOSABI_NONE:
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
			printf("<unknown: %x>\n", ei_osabi);
	}
}

/**
 * print_abiversion - Prints the ABI version of the ELF header.
 * @ei_abiversion: The ELF ABI version.
 */
void print_abiversion(unsigned char ei_abiversion)
{
	printf("ABI Version:                       %d\n", ei_abiversion);
}

/**
 * print_type - Prints the type of the ELF header.
 * @e_type: The ELF type.
 */
void print_type(uint16_t e_type)
{
	printf("Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
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
	}
}

/**
 * print_entry - Prints the entry point address of the ELF header.
 * @e_entry: The ELF entry point address.
 */
void print_entry(uint64_t e_entry)
{
	printf("Entry point address:               0x%lx\n", (unsigned long)e_entry);
}


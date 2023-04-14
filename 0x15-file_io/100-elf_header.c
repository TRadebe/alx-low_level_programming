#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 64

/* Define an ELF header structure */
struct elf_header {
unsigned char magic[4];/* magic number */
unsigned char class;/* ELF class */
unsigned char data;/* data encoding */
unsigned char version;/* ELF version */
unsigned char abi;/* operating system / ABI identification */
unsigned char abi_version;/* ABI version */
char pad[7];
short type; /* object file type */
short machine;/* machine type */
int version2;/* object file version */
unsigned long entry;/* entry point address */
unsigned long phoff;/* program header offset */
unsigned long shoff;/* section header offset */
int flags;/* processor-specific flags */
short ehsize;/* ELF header size */
short phentsize;/* program header entry size */
short phnum;/* number of program header entries */
short shentsize;/* section header entry size */
short shnum;/* number of section header entries */
short shstrndx;/* section header table's "section header string table" entry offset */
};

/* Function that prints the ELF header of a file */
void print_elf_header(const char *filename)
{
int fd;
struct elf_header ehdr;
ssize_t n_read;
/* Open the file for reading */
fd = open(filename, O_RDONLY);
if (fd == -1) {
fprintf(stderr, "Error: cannot open file '%s'\n", filename);
exit(98);
}

/* Read the ELF header */
n_read = read(fd, &ehdr, sizeof(ehdr));
if (n_read == -1) {
fprintf(stderr, "Error: cannot read ELF header of file '%s'\n", filename);
exit(98);
}
if (n_read != sizeof(ehdr)) {
fprintf(stderr, "Error: file '%s' is not a valid ELF file\n", filename);
exit(98);
}

/* Check the magic number */
if (ehdr.magic[0] != 0x7f || ehdr.magic[1] != 'E' || ehdr.magic[2] != 'L' || ehdr.magic[3] != 'F') {
fprintf(stderr, "Error: file '%s' is not a valid ELF file\n", filename);
exit(98);
}

/* Print the ELF header information */
printf("ELF Header:\n");
printf("Magic:%02x %02x %02x %02x\n", ehdr.magic[0], ehdr.magic[1], ehdr.magic[2], ehdr.magic[3]);
printf("Class:ELF%c\n", ehdr.class == 1 ? '32' : (ehdr.class == 2 ? '64' : '?'));
printf("Data:%s\n", ehdr.data == 1 ? "2's complement, little endian" : (ehdr.data == 2 ? "2's complement, big endian" : "unknown"));
printf("Version:%d (current)\n", (int) ehdr.version);
printf("OS/ABI:");

switch (ehdr.abi) {
case 0:
printf("UNIX - System V\n");
break;
case 1:
printf("HP
}

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define obfs(m,a,i,n) m##a##i##n
#define begin obfs(m,a,i,n)
#define start int begin() {print_src(); return 0;}

void print_src()
{
	// Com
	char spe[] = "\n\t\\\"";
	char *src = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c#define obfs(m,a,i,n) m##a##i##n%c#define begin obfs(m,a,i,n)%c#define start int begin() {print_src(); return 0;}%c%cvoid print_src()%c{%c%c// Com%c%cchar spe[] = %c%cn%ct%c%c%c%c%c;%c%cchar *src = %c%s%c;%c%cint fd = open(%c./Grace_kid.c%c, O_RDWR|O_CREAT);%c%c%cif (fd != -1) {%c%c%cdprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[3], spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0]);%c%c%cclose(fd);%c%c}%c}%c%cstart%c";
	int fd = open("./Grace_kid.c", O_RDWR|O_CREAT);

	if (fd != -1) {
		dprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[3], spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0]);
		close(fd);
	}
}

start

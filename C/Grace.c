#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define OBFS(m,a,i,n) m##a##i##n
#define BEGIN OBFS(m,a,i,n)
#define START(x) int BEGIN() {print_src(); return x;}

void print_src()
{
	/*
		Com
	*/
	char spe[] = "\n\t\\\"";
	char *src = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c#define OBFS(m,a,i,n) m##a##i##n%c#define BEGIN OBFS(m,a,i,n)%c#define START(x) int BEGIN() {print_src(); return x;}%c%cvoid print_src()%c{%c%c/*%c%c%cCom%c%c*/%c%cchar spe[] = %c%cn%ct%c%c%c%c%c;%c%cchar *src = %c%s%c;%c%cint fd = open(%c./Grace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, 0644);%c%c%cif (fd != -1) {%c%c%cdprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[3], spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0]);%c%c%cclose(fd);%c%c}%c}%c%cSTART(0)%c";
	int fd = open("./Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd != -1) {
		dprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[3], spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0]);
		close(fd);
	}
}

START(0)

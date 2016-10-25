#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define INT 5
#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define BFILE "./Sully_" STR(INT)
#define CFILE BFILE STR(.c)

int main()
{
	char spe[] = "\n\t\\\"";
	char *src = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c#define INT %d%c#define STR_HELPER(x) #x%c#define STR(x) STR_HELPER(x)%c#define BFILE %c./Sully_%c STR(INT)%c#define CFILE BFILE STR(.c)%c%cint main()%c{%c%cchar spe[] = %c%cn%ct%c%c%c%c%c;%c%cchar *src = %c%s%c;%c%cint fd;%c%c%cif (INT && (fd = open(CFILE, O_RDWR|O_CREAT)) != -1) {%c%c%cdprintf(fd, src, spe[0], spe[0], spe[0], spe[0], INT - 1, spe[0], spe[0], spe[0], spe[3], spe[3], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);%c%c%cclose(fd);%c%c}%c%creturn 0;%c}%c";
	int fd;

	if (INT && (fd = open(CFILE, O_RDWR|O_CREAT)) != -1) {
		dprintf(fd, src, spe[0], spe[0], spe[0], spe[0], INT - 1, spe[0], spe[0], spe[0], spe[3], spe[3], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);
		close(fd);
		execvp("/usr/bin/clang", (char *[]){"-Wall -Wextra -Werror", CFILE, "-o", BFILE});
	}
	return 0;
}

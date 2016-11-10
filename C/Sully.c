#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void exec_cmd(char *cmd, char *args[])
{
	pid_t child;
	int status = 0;

	child = fork();
	if (child == 0) {
		execvp(cmd, args);
		fprintf(stderr, "Error before execution\n");
		exit(1);
	}
	else {
		if (waitpid(child, &status, 0) == -1 || status) {
			fprintf(stderr, "Error during execution\n");
			exit(2);
		}
	}
}

int main()
{
	char spe[] = "\n\t\\\"";
	char *src = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%c#include <sys/wait.h>%c%cvoid exec_cmd(char *cmd, char *args[])%c{%c%cpid_t child;%c%cint status = 0;%c%c%cchild = fork();%c%cif (child == 0) {%c%c%cexecvp(cmd, args);%c%c%cfprintf(stderr, %cError before execution%cn%c);%c%c%cexit(1);%c%c}%c%celse {%c%c%cif (waitpid(child, &status, 0) == -1 || status) {%c%c%c%cfprintf(stderr, %cError during execution%cn%c);%c%c%c%cexit(2);%c%c%c}%c%c}%c}%c%cint main()%c{%c%cchar spe[] = %c%cn%ct%c%c%c%c%c;%c%cchar *src = %c%s%c;%c%cint fd;%c%cint i = %d;%c%cint x = i;%c%cchar bfile[10] = {'.', '/', 'S', 'u', 'l', 'l', 'y', '_', x + 48, 0};%c%cchar cfile[12] = {'.', '/', 'S', 'u', 'l', 'l', 'y', '_', x + 48, '.', 'c', 0};%c%c%cif (access(cfile, F_OK) != -1) {%c%c%cx--;%c%c%cbfile[8] = x + 48;%c%c%ccfile[8] = x + 48;%c%c}%c%cif ((fd = open(cfile, O_WRONLY | O_CREAT | O_TRUNC, 0644)) != -1) {%c%c%cdprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[3], spe[2], spe[3], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[1], spe[3], spe[2], spe[3], spe[0], spe[1], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[0], spe[1], x, spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[3], spe[3], spe[3], spe[3], spe[3], spe[3], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);%c%c%cclose(fd);%c%c%cexec_cmd(%c/usr/bin/clang%c, (char *[]){%c-Wall -Wextra -Werror%c, cfile, %c-o%c, bfile, NULL});%c%c%cif (x)%c%c%c%cexec_cmd(bfile, NULL);%c%c}%c%creturn 0;%c}%c";
	int fd;
	int i = 5;
	int x = i;
	char bfile[10] = {'.', '/', 'S', 'u', 'l', 'l', 'y', '_', x + 48, 0};
	char cfile[12] = {'.', '/', 'S', 'u', 'l', 'l', 'y', '_', x + 48, '.', 'c', 0};

	if (access(cfile, F_OK) != -1) {
		x--;
		bfile[8] = x + 48;
		cfile[8] = x + 48;
	}
	if ((fd = open(cfile, O_WRONLY | O_CREAT | O_TRUNC, 0644)) != -1) {
		dprintf(fd, src, spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[3], spe[2], spe[3], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[1], spe[3], spe[2], spe[3], spe[0], spe[1], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[1], spe[0], spe[1], x, spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[3], spe[3], spe[3], spe[3], spe[3], spe[3], spe[0], spe[1], spe[1], spe[0], spe[1], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);
		close(fd);
		exec_cmd("/usr/bin/clang", (char *[]){"-Wall -Wextra -Werror", cfile, "-o", bfile, NULL});
		if (x)
			exec_cmd(bfile, NULL);
	}
	return 0;
}

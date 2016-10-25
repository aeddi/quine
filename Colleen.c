#include <stdio.h>

/*
	Com1
*/
void print_src(char *src, char *spe)
{
	printf(src, spe[0], spe[0], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);
}

int main(void)
{
	/*
		Com2
	*/
	char spe[] = "\n\t\\\"";
	char *src = "#include <stdio.h>%c%c/*%c%cCom1%c*/%cvoid print_src(char *src, char *spe)%c{%c%cprintf(src, spe[0], spe[0], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[0], spe[0], spe[0], spe[0], spe[1], spe[0], spe[1], spe[1], spe[0], spe[1], spe[0], spe[1], spe[3], spe[2], spe[2], spe[2], spe[2], spe[2], spe[3], spe[3], spe[0], spe[1], spe[3], src, spe[3], spe[0], spe[0], spe[1], spe[0], spe[1], spe[0], spe[0]);%c}%c%cint main(void)%c{%c%c/*%c%c%cCom2%c%c*/%c%cchar spe[] = %c%cn%ct%c%c%c%c%c;%c%cchar *src = %c%s%c;%c%c%cprint_src(src, spe);%c%creturn 0;%c}%c";

	print_src(src, spe);
	return 0;
}

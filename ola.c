#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char argumento[30];
	
	/* o valor padrão é Mundo */
	strcpy(argumento, argc > 2 ? argv[1]:"Mundo");
	printf("ola, %s !", argumento);
	
	return 0;
}

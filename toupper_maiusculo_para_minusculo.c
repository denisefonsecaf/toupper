#include <stdio.h>
#include <string.h>
#include <ctype.h>

main ()
{
	char nome[40];
	char *dado;
	
	printf ("\nDigite seu nome e sobrenome: ");
	fgets(nome, 40, stdin);
	
	dado = nome;
	while (*dado)
		putchar(toupper(*dado++));
		printf ("\n");
	
}


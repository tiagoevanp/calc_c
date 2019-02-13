#include <stdio.h>
#include <stdlib.h>

void main() {
	char * nome;

	nome = malloc(sizeof(char) * 20);

	printf("Digite seu nome: ");
	scanf("%[^\n]", nome);
	
	printf("Seu nome é: %s \n", nome);

	free(nome);

}
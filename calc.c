#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float calc(float num1, float num2, char* operator) {
	float result;

	switch(operator[0]) {
		case '+' : result = num1 + num2; break;
		case '-' : result = num1 - num2; break;
		case 'x' : result = num1 * num2; break;
		case '/' : result = num1 / num2; break;
	}
	return result;
}

int verificationsBeforeCalc(int argc, char **argv) {
	//VERIFICA A QUANTIDADE DE ARGUMENTOS ENVIADOS
	if(argc != 4) {
		printf("O número de parametros passados deve ser 3\n");
		return 1;
	}
	
	char firstNum = *argv[1];
	char secondNum = *argv[3];
	
	//VERIFICA SE ESTÁ ENVIANDO NÚMEROS COMO OPERANDOS
	if(!isdigit(firstNum) || !isdigit(secondNum)) {
		printf("Apenas números são aceitos como operandos!\n");
		return 1;
	}

	//VERIFICA SE O OPERADOR É VALIDO 
	if(strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 && strcmp(argv[2], "x") != 0 && strcmp(argv[2], "/") != 0) {
		printf("Apenas é aceito operadores como: '+', '-', '/' ou 'x'\n");
		return 1;
	}

	//VERIFICA SE OS NÚMEROS PASSADOS COMO ARGUMENTO SÃO MAIORES
	if(strlen(argv[1]) > 10 || strlen(argv[3]) > 10) {
		printf("Um dos seus operandos é maior do que o permitido (10 caracteres).\n");
		return 1;
	}

	return 0;
}

int main(int argc, char **argv) {
	char * a;

	if(verificationsBeforeCalc(argc, argv)) {
		return 1;
	}

	float firstNum = strtof(argv[1], &a);
	float secondNum = strtof(argv[3], &a);
	
	float result = calc(firstNum, secondNum, argv[2]);
	printf("%g\n", result);
	
	return 0;
}
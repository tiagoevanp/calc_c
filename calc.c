#include <stdio.h>
#include <stdlib.h>

long calc(long num1, long num2, char operator) {
	printf("%ln\n", num1);
	long result;

	// switch(operator) {
	// 	case '+' : result = num1 + num2; break;
	// 	case '-': result = num1 - num2; break;
	// 	case '*': result = num1 * num2; break;
	// 	case '/': result = num1 / num2; break;
	// }
	return result;
}

void main(int argcs, char **argv) {
	long *firstNum;
	long *secondNum;
	long *result;
	char *operator;

	firstNum = malloc(sizeof(long));
	secondNum = malloc(sizeof(long));
	result = malloc(sizeof(long));
	operator = malloc(sizeof(char));
	
	*result = calc(*argv[1], *argv[3], *argv[2]);
	printf("%ln\n", result);

	free(firstNum);
	free(secondNum);
	free(operator);
	free(result);
}